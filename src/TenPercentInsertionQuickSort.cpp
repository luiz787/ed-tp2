#include "TenPercentInsertionQuickSort.hpp"
#include "InsertionSort.hpp"

SortingData TenPercentInsertionQuickSort::sort(int *arr, int size) {
    this->threshold = size / 10;
    return QuickSort::sort(arr, size);
}

void TenPercentInsertionQuickSort::quickSort(int* arr, int start, int end, SortingData* sd) {
    if (end - start + 1 > threshold) {
        int pivot = partition(arr, start, end, sd);
        quickSort(arr, start, pivot - 1, sd);
        quickSort(arr, pivot + 1, end, sd);
    } else {
        InsertionSort::sort(arr, start, end, sd);
    }
}

TenPercentInsertionQuickSort::~TenPercentInsertionQuickSort() = default;
