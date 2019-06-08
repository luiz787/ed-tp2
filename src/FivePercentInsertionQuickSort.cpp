#include "FivePercentInsertionQuickSort.hpp"
#include "InsertionSort.hpp"

SortingData FivePercentInsertionQuickSort::sort(int *arr, int size) {
    this->threshold = size / 20;
    return QuickSort::sort(arr, size);
}

void FivePercentInsertionQuickSort::quickSort(int* arr, int start, int end, SortingData* sd) {
    if (end - start + 1 > threshold) {
        int i = start;
        int j = end;
        partition(arr, &i, &j, sd);
        if (start < j) {
            quickSort(arr, start, j, sd);
        }
        if (i < end) {
            quickSort(arr, i, end, sd);
        }
    } else {
        InsertionSort::sort(arr, start, end, sd);
    }
}

FivePercentInsertionQuickSort::~FivePercentInsertionQuickSort() = default;
