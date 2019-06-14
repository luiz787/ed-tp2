#include "TenPercentInsertionQuickSort.hpp"
#include "InsertionSort.hpp"

/*
 * Método sort do quickSort híbrido com inserção 10%, que determina o limite para utilização do método de inserção
 * como 10% do tamanho do vetor original.
 *
 * @param arr - vetor a ser ordenado.
 * @param size - tamanho do vetor a ser ordenado.
 *
 * @returns dados sobre a execução do algoritmo de ordenação.
 */
SortingData TenPercentInsertionQuickSort::sort(int *arr, int size) {
    this->threshold = size / 10; // Determina o limite como 10% do tamanho do vetor.
    return QuickSort::sort(arr, size);
}

void TenPercentInsertionQuickSort::quickSort(int* arr, int start, int end, SortingData* sd) {
    if (end - start + 1 > threshold) { // Caso o tamanho seja maior que o limite, prossegue com quickSort.
        int i = start;
        int j = end;
        partition(arr, &i, &j, sd); // Utiliza a partição mediana de três.
        if (start < j) { // Se j for maior que start, chama quickSort recursivamente para o intervalo [start, j]
            quickSort(arr, start, j, sd);
        }
        if (i < end) { // Se i for menor que end, chama quickSort recursivamente para o intervalo [i, end]
            quickSort(arr, i, end, sd);
        }
        // Condição de parada da recursão: se start >= j e i >= end, não irá fazer nenhuma chamada recursiva.
    } else { // Caso o tamanho seja menor ou igual ao limite, utiliza o método de inserção.
        InsertionSort::sort(arr, start, end, sd);
    }
}

TenPercentInsertionQuickSort::~TenPercentInsertionQuickSort() = default;
