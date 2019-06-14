#ifndef ED_TP2_FIRSTELEMENTPIVOTQUICKSORT_HPP
#define ED_TP2_FIRSTELEMENTPIVOTQUICKSORT_HPP


#include "QuickSort.hpp"

class FirstElementPivotQuickSort : public QuickSort {
public:
    /*
     * API do quickSort primeiro elemento. Escolha do pivô: primeiro elemento.
     *
     * @param arr - vetor a ser ordenado.
     * @param start - início do vetor.
     * @param end - final do vetor.
     * @param sd - objeto que contabiliza informações sobre a execução do algoritmo de ordenação.
     */
    void quickSort(int* arr, int start, int end, SortingData* sd) override;
    /*
     * Destrutor padrão.
     */
    ~FirstElementPivotQuickSort() override;
private:
    /*
     * Método de partição, que retorna o índice do pivô após a partição.
     *
     * @param arr - vetor a ser particionado.
     * @param start - início do vetor a ser particionado.
     * @param end - final do vetor a ser particionado.
     * @param sd - objeto que contabiliza informações sobre a execução do algoritmo de ordenação
     *
     * @returns índice do pivô após a partição.
     */
    static int partition(int* arr, int start, int end, SortingData* sd);
};

#endif //ED_TP2_FIRSTELEMENTPIVOTQUICKSORT_HPP
