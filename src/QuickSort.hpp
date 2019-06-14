#ifndef ED_TP2_QUICKSORT_HPP
#define ED_TP2_QUICKSORT_HPP

#include "SortingData.hpp"

/*
 * Classe base de todos os quickSorts. Expõe um método público sort, que recebe o vetor a ser ordenado e seu tamanho.
 */
class QuickSort {
private:
    /*
     * Método puro virtual de quickSort, que deve ser implementado pelas subclasses.
     */
    virtual void quickSort(int* arr, int start, int end, SortingData* sd) = 0;
public:
    /*
     * API do quickSort. A implementação padrão apenas cria um objeto SortingData, chama quickSort e retorna os dados
     * da execução.
     *
     * @param arr - vetor a ser ordenado.
     * @param size - tamanho do vetor.
     *
     * @returns dados sobre a execução do algoritmo de ordenação.
     */
    virtual SortingData sort(int* arr, int size) {
        auto sd = SortingData();
        quickSort(arr, 0, size - 1, &sd);
        return sd;
    }

    /*
     * Destrutor virtual padrão.
     */
    virtual ~QuickSort() = default;
};

#endif //ED_TP2_QUICKSORT_HPP
