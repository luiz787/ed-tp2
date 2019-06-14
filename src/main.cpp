#include <iostream>
#include <assert.h>
#include <cstring>
#include <chrono>
#include "VectorType.hpp"
#include "QuickSort.hpp"
#include "QuickSortFactory.hpp"
#include "ClassicQuickSort.hpp"
#include <random>

bool debug_checkSorted(int* vector, int size);
void print(int* vector, int size);
int* generateVector(int size, VectorType::Type type);

int main(int argc, char* argv[]) {
    assert(argc > 3); // Asserção para garantir que o programa tenha no mínimo 3 argumentos.
    QuickSort* quickSort = QuickSortFactory::getQuickSort(argv[1]);
    auto vectorType = VectorType::getType(argv[2]);
    unsigned int vectorSize = std::stol(argv[3]);
    bool shouldPrintVector = false;
    if (argc == 5 && strncmp(argv[4], "-p", 2) == 0) {
        shouldPrintVector = true;
    }
    auto vector = generateVector(vectorSize, vectorType);
    if (shouldPrintVector) {
        print(vector, vectorSize);
    }
    auto t1 = std::chrono::high_resolution_clock::now();
    auto sortingData = quickSort->sort(vector, vectorSize);
    auto t2 = std::chrono::high_resolution_clock::now();
    auto elapsed_time = std::chrono::duration_cast<std::chrono::duration<double>>(t2 - t1);
    //std::cout << "Sorted?" << debug_checkSorted(vector, vectorSize) << std::endl;
    std::cout << argv[1] << " " << argv[2] << " " << argv[3] << " " << sortingData.getComparisons() << " " << sortingData.getSwaps() << std::endl;
    std::cout << "Tempo de execucao: " << elapsed_time.count() << std::endl;
    delete quickSort;
    delete [] vector;
    return 0;
}

bool debug_checkSorted(int* vector, int size) {
    for (int i = 0; i < size - 1; i++) {
        if (vector[i] > vector[i + 1]) {
            return false;
        }
    }
    return true;
}

void print(int* vector, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl;
}

int* generateVector(int size, VectorType::Type type) {
    auto vector = new int[size]; // Instancia um vetor de inteiros no heap.
    if (type == VectorType::ORDERED_ASC) {
        // Caso seja requisitado um vetor crescente, é gerado um vetor no intervalo [0, size)
        for (int i = 0; i < size; i++) {
            vector[i] = i;
        }
    }
    if (type == VectorType::ORDERED_DESC) {
        // Caso seja requisitado um vetor decrescente, é gerado um vetor no intervalo [0, size)
        for (int i = size - 1; i >= 0; i--) {
            vector[i] = i;
        }
    }
    if (type == VectorType::RANDOM) {
        /*
         * Para gerar o número aleatório, utiliza-se um "random device", que faz uso dos recursos
         * do sistema operacional para gerar um número pseudo-aleatório.
         */
        std::random_device rd;
        std::mt19937 rng(rd());
        // Intervalo dos valores: 0 até o tamanho do vetor, especificado no parâmetro.
        std::uniform_int_distribution<int> uni(0, size);
        for (int i = 0; i < size; i++) {
            auto randomValue = uni(rng);
            vector[i] = randomValue;
        }
    }
    return vector;
}
