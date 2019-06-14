#ifndef ED_TP2_CLASSICQUICKSORT_HPP
#define ED_TP2_CLASSICQUICKSORT_HPP

#include "QuickSort.hpp"

class ClassicQuickSort : public QuickSort {
public:
    /*
     * Destrutor padrão.
     */
    ~ClassicQuickSort() override;
protected:
    /*
     * Função de partição do quickSort clássico, por referência.
     */
    static void partition(int *arr, int pivot, int* i, int* j, SortingData* sd);
private:
    /*
     * QuickSort clássico.
     *
     * @param arr - vetor a ser ordenado.
     * @param start - início do vetor.
     * @param end - final do vetor
     *
     * @returns dados sobre a execução do algoritmo de ordenação.
     */
    void quickSort(int *arr, int start, int end, SortingData* sd) override;
};

#endif //ED_TP2_CLASSICQUICKSORT_HPP
