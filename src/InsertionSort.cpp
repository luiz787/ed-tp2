#include "InsertionSort.hpp"

/*
 * Algoritmo de ordenação por inserção. Para ordenar, o algoritmo seleciona um elemento, a partir do índice 1, e os
 * compara com os elementos anteriores, e troca caso algum elemento anterior seja maior.
 *
 * @param arr - vetor a ser ordenado.
 * @param start - início do vetor a ser ordenado.
 * @param end - final do vetor a ser ordenado.
 * @param sd - objeto que contabiliza dados sobre a execução do algoritmo de ordenação.
 */
void InsertionSort::sort(int *arr, int start, int end, SortingData* sd) {
    int key;
    int j;
    for (int i = start + 1; i <= end; ++i) {
        key = arr[i];
        j = i - 1;
        sd->incrementComparisons();
        while (j >= 0 && arr[j] > key) {
            sd->incrementComparisons();
            arr[j + 1] = arr[j];
            sd->incrementSwaps();
            j--;
        }
        sd->incrementSwaps();
        arr[j + 1] = key;
    }
}
