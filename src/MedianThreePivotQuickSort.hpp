#ifndef ED_TP2_MEDIANTHREEPIVOTQUICKSORT_HPP
#define ED_TP2_MEDIANTHREEPIVOTQUICKSORT_HPP

#include "QuickSort.hpp"
/*
 * QuickSort mediana de três. Escolhe o pivô como a mediana dos elementos inicial, do meio e final do vetor.
 */
class MedianThreePivotQuickSort : public QuickSort {
public:
    /*
     * Destrutor padrão.
     */
    ~MedianThreePivotQuickSort() override;
protected:
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
    static int medianThree(int* arr, int start, int end, SortingData* sd);
    /*
     * Particiona o vetor, utilizando a mediana dos elementos inicial, do meio e final do vetor como pivô, recebendo
     * o início e final por referência.
     *
     * @param arr - vetor a ser particionado.
     * @param i - início do vetor a ser particionado.
     * @param j - final do vetor a ser particionado.
     * @param sd - objeto que contabiliza os dados sobre a execução do algoritmo de ordenação.
     */
    static void partition(int *arr, int* i, int* j, SortingData* sd);
private:
    /*
    * QuickSort mediana de três. A escolha do pivô é a mediana dos elementos inicial, do meio e final do vetor.
    *
    * @param arr - vetor a ser ordenado.
    * @param start - início do vetor.
    * @param end - final do vetor.
    * @param sd - objeto que contabiliza informações sobre a execução do algoritmo de ordenação.
    */
    void quickSort(int* arr, int start, int end, SortingData* sd) override;
};

#endif //ED_TP2_MEDIANTHREEPIVOTQUICKSORT_HPP
