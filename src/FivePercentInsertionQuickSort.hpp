#ifndef ED_TP2_FIVEPERCENTINSERTIONQUICKSORT_HPP
#define ED_TP2_FIVEPERCENTINSERTIONQUICKSORT_HPP

#include "QuickSort.hpp"
#include "MedianThreePivotQuickSort.hpp"
/*
 * QuickSort inserção 5%. Herda de QuickSort mediana de três.
 */
class FivePercentInsertionQuickSort : public MedianThreePivotQuickSort {
public:
    /*
     * API do quickSort inserção 5%. Sobrescreve o método padrão, para determinar o tamanho máximo para o qual
     * o algoritmo de inserção passará a ser utilizado.
     */
    SortingData sort(int* arr, int size) override;
    /*
     * Destrutor padrão.
     */
    ~FivePercentInsertionQuickSort() override;
private:
    long threshold; // Limite de tamanho para começar a utilizar inserção.
    void quickSort(int* arr, int start, int end, SortingData* sd) override;
};

#endif //ED_TP2_FIVEPERCENTINSERTIONQUICKSORT_HPP
