#include <iostream>
#include "ClassicQuickSort.hpp"
#include "SortingData.hpp"

/*
 * QuickSort clássico. A escolha do pivô é o elemento central.
 *
 * @param arr - vetor a ser ordenado.
 * @param start - início do vetor.
 * @param end - final do vetor.
 * @param sd - objeto que contabiliza informações sobre a execução do algoritmo de ordenação
 */
void ClassicQuickSort::quickSort(int* arr, int start, int end, SortingData* sd) {
    int i = start;
    int j = end;
    int pivot = arr[(start + end) / 2]; // Escolha de pivô: elemento central.
    partition(arr, pivot, &i, &j, sd);

    // Se j for maior que start, chama quickSort recursivamente para o intervalo [start, j]
    if (start < j) {
        quickSort(arr, start, j, sd);
    }
    // Se i for menor que end, chama quickSort recursivamente para o intervalo [i, end]
    if (i < end) {
        quickSort(arr, i, end, sd);
    }
    // Condição de parada da recursão: se start >= j e i >= end, não irá fazer nenhuma chamada recursiva.
}

/*
 * Partição que recebe i (início) e j (fim) por referência. Essa função irá incrementar i enquanto arr[i] seja menor
 * que o pivô, e irá decrementar j enquanto que arr[j] seja maior que o pivô. Assim, garante-se que i e j irão
 * caminhar até no máximo o índice do pivô. Assim que um elemento maior ou igual ao pivô seja encontrado, no caso
 * de i, ou menor ou igual ao pivô, no caso de j, arr[i] e arr[j] são trocados, e i e j avançam em uma unidade.
 * O processo termina assim que i e j se cruzarem, ou seja, assim que i for maior que j.
 * Com isso, ao final do método, o valor de i será o final do primeiro subvetor, e o valor de j será o início
 * do segundo subvetor.
 * @param arr - vetor a ser particionado
 * @param pivot - pivô
 * @param i - inicio do array a ser particionado
 * @param j - final do array a ser particionado
 * @param sd - objeto que contabiliza informações sobre a execução do algoritmo de ordenação
 */
void ClassicQuickSort::partition(int *arr, int pivot, int* i, int* j, SortingData* sd) {
    while (*i <= *j) {
        sd->incrementComparisons();
        while (arr[*i] < pivot) {
            sd->incrementComparisons();
            (*i)++;
        }
        sd->incrementComparisons();
        while (arr[*j] > pivot) {
            sd->incrementComparisons();
            (*j)--;
        }
        if (*i <= *j) {
            sd->incrementSwaps();
            int tmp = arr[*i];
            arr[*i] = arr[*j];
            arr[*j] = tmp;
            (*i)++;
            (*j)--;
        }
    }
}

/*
 * Destrutor padrão.
 */
ClassicQuickSort::~ClassicQuickSort() = default;
