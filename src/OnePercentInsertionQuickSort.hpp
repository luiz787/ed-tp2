#ifndef ED_TP2_ONEPERCENTINSERTIONQUICKSORT_HPP
#define ED_TP2_ONEPERCENTINSERTIONQUICKSORT_HPP

#include "QuickSort.hpp"
#include "MedianThreePivotQuickSort.hpp"

class OnePercentInsertionQuickSort : public MedianThreePivotQuickSort {
public:
    /*
     * API do quickSort inserção 1%. Sobrescreve o método padrão, para determinar o tamanho máximo para o qual
     * o algoritmo de inserção passará a ser utilizado (1% do tamanho do vetor original).
     *
     * @param arr - vetor a ser ordenado.
     * @param size - tamanho do vetor.
     *
     * @returns dados sobre a execução do algoritmo de ordenação.
     */
    SortingData sort(int* arr, int size) override;
    /*
     * Destrutor padrão.
     */
    ~OnePercentInsertionQuickSort() override;
private:
    long threshold; // Limite de tamanho para começar a utilizar inserção.
    void quickSort(int* arr, int start, int end, SortingData* sd) override;
};

#endif //ED_TP2_ONEPERCENTINSERTIONQUICKSORT_HPP
