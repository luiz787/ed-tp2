#ifndef ED_TP2_NONRECURSIVEQUICKSORT_HPP
#define ED_TP2_NONRECURSIVEQUICKSORT_HPP

#include "QuickSort.hpp"
#include "ClassicQuickSort.hpp"

/*
 * QuickSort não recursivo: utiliza uma pilha auxiliar para guardar os índices das chamadas recursivas.
 * Herda de ClassicQuickSort, pois utiliza a pivotação clássica (elemento do meio).
 */
class NonRecursiveQuickSort : public ClassicQuickSort {
public:
    /*
    * QuickSort clássico. A escolha do pivô é o elemento central.
    *
    * @param arr - vetor a ser ordenado.
    * @param start - início do vetor.
    * @param end - final do vetor.
    * @param sd - objeto que contabiliza informações sobre a execução do algoritmo de ordenação
    */
    void quickSort(int* arr, int start, int end, SortingData* sd) override;
    /*
     * Destrutor
     */
    ~NonRecursiveQuickSort() override;
};

#endif //ED_TP2_NONRECURSIVEQUICKSORT_HPP
