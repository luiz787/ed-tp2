#include <iostream>
#include "OnePercentInsertionQuickSort.hpp"
#include "InsertionSort.hpp"

SortingData OnePercentInsertionQuickSort::sort(int *arr, int size) {
    this->threshold = size / 100;
    return QuickSort::sort(arr, size);
}

void OnePercentInsertionQuickSort::quickSort(int* arr, int start, int end, SortingData* sd) {
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

OnePercentInsertionQuickSort::~OnePercentInsertionQuickSort() = default;
