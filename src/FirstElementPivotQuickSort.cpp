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
    while (true) {
        while (i <= j) {
            sd->incrementComparisons();
            if (arr[i] < pivot) {
                i++;
            } else {
                break;
            }
        }
        while (j > i) {
            sd->incrementComparisons();
            if (arr[j] > pivot) {
                j--;
            } else {
                break;
            }
        }
        if (i >= j) {
            break;
        }
        sd->incrementSwaps();
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        i++;
        j--;
    }
    sd->incrementSwaps();
    arr[start] = arr[i - 1];
    arr[i - 1] = pivot;
    return i - 1;
}

FirstElementPivotQuickSort::~FirstElementPivotQuickSort() = default;
