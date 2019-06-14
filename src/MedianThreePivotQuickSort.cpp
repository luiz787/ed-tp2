#include <iostream>
#include "MedianThreePivotQuickSort.hpp"

/*
* Método para calcular a mediana dos elementos inicial, do meio e final do vetor, colocando-os em ordem.
*
* @param arr - vetor ao qual a mediana será calculada.
* @param start - início do vetor.
* @param end - final do vetor.
* @param sd - objeto que contabiliza os dados sobre a execução do algoritmo de ordenação.
*
* @returns mediana dos elementos inicial, do meio e final do vetor.
*/
int MedianThreePivotQuickSort::medianThree(int *arr, int start, int end, SortingData* sd) {
    int middle = (start + end) / 2; // Índice do meio do vetor.
    sd->incrementComparisons();
    if (arr[middle] < arr[start]) {
        sd->incrementSwaps();
        int tmp = arr[start];
        arr[start] = arr[middle];
        arr[middle] = tmp;
    }
    sd->incrementComparisons();
    if (arr[end] < arr[start]) {
        sd->incrementSwaps();
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
    }
    sd->incrementComparisons();
    if (arr[end] < arr[middle]) {
        sd->incrementSwaps();
        int tmp = arr[middle];
        arr[middle] = arr[end];
        arr[end] = tmp;
    }
    return arr[middle]; // Retorna a mediana dos três elementos, que já está na posição correta.
}

/*
* QuickSort mediana de três. A escolha do pivô é a mediana dos elementos inicial, do meio e final do vetor.
*
* @param arr - vetor a ser ordenado.
* @param start - início do vetor.
* @param end - final do vetor.
* @param sd - objeto que contabiliza informações sobre a execução do algoritmo de ordenação.
*/
void MedianThreePivotQuickSort::quickSort(int* arr, int start, int end, SortingData* sd) {
    int i = start;
    int j = end;
    partition(arr, &i, &j, sd);
    if (start < j) {
        quickSort(arr, start, j, sd);
    }
    if (i < end) {
        quickSort(arr, i, end, sd);
    }
}

/*
* Particiona o vetor, utilizando a mediana dos elementos inicial, do meio e final do vetor como pivô, recebendo
* o início e final por referência.
*
* @param arr - vetor a ser particionado.
* @param i - início do vetor a ser particionado.
* @param j - final do vetor a ser particionado.
* @param sd - objeto que contabiliza os dados sobre a execução do algoritmo de ordenação.
*/
void MedianThreePivotQuickSort::partition(int *arr, int *i, int *j, SortingData *sd) {
    int median = medianThree(arr, *i, *j, sd);
    while (*i <= *j) {
        sd->incrementComparisons();
        while (arr[*i] < median) {
            sd->incrementComparisons();
            (*i)++;
        }
        sd->incrementComparisons();
        while (arr[*j] > median) {
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
MedianThreePivotQuickSort::~MedianThreePivotQuickSort() = default;
