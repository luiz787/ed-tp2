#include <iostream>
#include "ClassicQuickSort.hpp"
#include "SortingData.hpp"

void ClassicQuickSort::quickSort(int* arr, int start, int end, SortingData* sd) {
    int i = start;
    int j = end;
    int pivot = arr[(start + end) / 2];
    partition(arr, pivot, &i, &j, sd);

    if (start < j) {
        quickSort(arr, start, j, sd);
    }
    if (i < end) {
        quickSort(arr, i, end, sd);
    }
}

void ClassicQuickSort::partition(int *arr, int pivot, int* i, int* j, SortingData* sd) {
    while (*i <= *j) {
        while (arr[*i] < pivot) {
            sd->incrementComparisons();
            (*i)++;
        }
        while (arr[*j] > pivot) {
            sd->incrementComparisons();
            (*j)--;
        }
        if (*i <= *j) {
            sd->incrementSwaps();
            int tmp = arr[*i];
            arr[*i] = arr[*j];
            arr[*j] = tmp;
            (*i)++;
            (*j)--;
        }
    }
}

ClassicQuickSort::~ClassicQuickSort() = default;
