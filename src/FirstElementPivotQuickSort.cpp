#include "FirstElementPivotQuickSort.hpp"

/*
 * QuickSort que escolhe o primeiro elemento como pivô.
 * @param arr - vetor a ser ordenado.
 * @param size - tamanho do vetor.
 * @param end - final do vetor.
 * @param sd - objeto que contabiliza informações sobre a execução do algoritmo de ordenação
 */
void FirstElementPivotQuickSort::quickSort(int* arr, int start, int end, SortingData* sd) {
    if (start >= end) { // Condição de parada: start ser igual ou maior que end.
        return;
    }
    /*
     * Nesse caso, a função partition retorna o índice o pivô, então sabemos que ele está na posição correta.
     * Dessa forma, quickSort é chamada recusivamente para os subvetores [start, pivot-1] e [pivot+1, end].
     */
    int pivot = partition(arr, start, end, sd);
    quickSort(arr, start, pivot - 1, sd);
    quickSort(arr, pivot + 1, end, sd);
}

/*
 * Método de partição, que escolhe como pivô o primeiro elemento do vetor. i começa em start + 1, pois não é necessário
 * comparar o pivô com ele mesmo, e j começa em end.
 *
 * @param arr - vetor a ser particionado.
 * @param start - início do vetor a ser particionado.
 * @param end - final do vetor a ser particionado.
 * @param sd - objeto que contabiliza informações sobre a execução do algoritmo de ordenação
 *
 * @returns índice do pivô após a partição.
 */
int FirstElementPivotQuickSort::partition(int *arr, int start, int end, SortingData* sd) {
    int pivot = arr[start]; // Escolha do pivô: primeiro elemento.
    int i = start + 1; // Nesse caso, i começa como start + 1, pois não é necessário passar pelo pivô, que é start.
    int j = end;
    while (i <= j) {
        sd->incrementComparisons();
        while (arr[i] < pivot) {
            sd->incrementComparisons();
            i++;
        }
        sd->incrementComparisons();
        while (arr[j] > pivot) {
            sd->incrementComparisons();
            j--;
        }
        if (i <= j) {
            sd->incrementSwaps();
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }

    int pivotPosition = i - 1;
    sd->incrementSwaps();
    arr[start] = arr[pivotPosition];
    arr[pivotPosition] = pivot;

    return pivotPosition;
}

/*
 * Destrutor padrão.
 */
FirstElementPivotQuickSort::~FirstElementPivotQuickSort() = default;
