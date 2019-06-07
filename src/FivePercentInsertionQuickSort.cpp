#include "FivePercentInsertionQuickSort.hpp"
#include "InsertionSort.hpp"

SortingData FivePercentInsertionQuickSort::sort(int *arr, int size) {
    this->threshold = size / 20;
    return QuickSort::sort(arr, size);
}

void FivePercentInsertionQuickSort::quickSort(int* arr, int start, int end, SortingData* sd) {
    if (end - start + 1 > threshold) {
        int pivot = partition(arr, start, end, sd);
        quickSort(arr, start, pivot - 1, sd);
        quickSort(arr, pivot + 1, end, sd);
    } else {
        InsertionSort::sort(arr, start, end, sd);
    }
}

FivePercentInsertionQuickSort::~FivePercentInsertionQuickSort() = default;
