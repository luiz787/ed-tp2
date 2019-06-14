#ifndef ED_TP2_INSERTIONSORT_HPP
#define ED_TP2_INSERTIONSORT_HPP

#include "SortingData.hpp"
/*
 * Algoritmo de ordenação por inserção. Para ordenar, o algoritmo seleciona um elemento, a partir do índice 1, e os
 * compara com os elementos anteriores, e troca caso algum elemento anterior seja maior.
 */
class InsertionSort {
public:
    /*
     * API do insertion sort.
     *
     * @param arr - vetor a ser ordenado.
     * @param start - início do vetor a ser ordenado.
     * @param end - final do vetor a ser ordenado.
     * @param sd - objeto que contabiliza dados sobre a execução do algoritmo de ordenação.
     */
    static void sort(int* arr, int start, int end, SortingData* sd);
};

#endif //ED_TP2_INSERTIONSORT_HPP
