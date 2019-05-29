#include <iostream>
#include "OnePercentInsertionQuickSort.hpp"
#include "InsertionSort.hpp"

SortingData OnePercentInsertionQuickSort::sort(int *arr, int size) {
    this->threshold = size / 100;
    return QuickSort::sort(arr, size);
}

void OnePercentInsertionQuickSort::quickSort(int* arr, int start, int end, SortingData* sd) {
    if (end - start + 1 > threshold) {
        int pivot = partition(arr, start, end, sd);
        quickSort(arr, start, pivot - 1, sd);
        quickSort(arr, pivot + 1, end, sd);
    } else {
        InsertionSort::sort(arr, start, end, sd);
    }
}

OnePercentInsertionQuickSort::~OnePercentInsertionQuickSort() = default;
