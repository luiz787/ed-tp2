#include "FirstElementPivotQuickSort.hpp"

/*
 * QuickSort que escolhe o primeiro elemento como pivô.
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
 *
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
