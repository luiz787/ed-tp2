#include "FirstElementPivotQuickSort.hpp"

void FirstElementPivotQuickSort::quickSort(int* arr, int start, int end, SortingData* sd) {
    if (start >= end) {
        return;
    }
    int pivot = partition(arr, start, end, sd);
    quickSort(arr, start, pivot - 1, sd);
    quickSort(arr, pivot + 1, end, sd);
}

int FirstElementPivotQuickSort::partition(int *arr, int start, int end, SortingData* sd) {
    int pivot = arr[start];
    int i = start + 1;
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

    if (pivotPosition != start) {
        sd->incrementSwaps();
        arr[start] = arr[pivotPosition];
        arr[pivotPosition] = pivot;
    }

    return pivotPosition;
}

FirstElementPivotQuickSort::~FirstElementPivotQuickSort() = default;
