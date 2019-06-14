#ifndef ED_TP2_TENPERCENTINSERTIONQUICKSORT_HPP
#define ED_TP2_TENPERCENTINSERTIONQUICKSORT_HPP

#include "QuickSort.hpp"
#include "MedianThreePivotQuickSort.hpp"

/*
 * QuickSort híbrido com inserção 10%. Herda de QuickSort mediana de três.
 */
class TenPercentInsertionQuickSort : public MedianThreePivotQuickSort {
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
    ~TenPercentInsertionQuickSort() override;
private:
    long threshold;  // Limite de tamanho para começar a utilizar inserção.
    /*
    * Método de quickSort híbrido com inserção 10%.
    *
    * @param arr - vetor a ser ordenado.
    * @param start - início do vetor.
    * @param end - final do vetor
    * @param sd -  objeto que contabiliza dados sobre a execução do algoritmo de ordenação.
    */
    void quickSort(int* arr, int start, int end, SortingData* sd) override;
};

#endif //ED_TP2_TENPERCENTINSERTIONQUICKSORT_HPP
