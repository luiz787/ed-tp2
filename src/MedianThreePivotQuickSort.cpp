#include <iostream>
#include "MedianThreePivotQuickSort.hpp"

int MedianThreePivotQuickSort::medianThree(int *arr, int start, int end, SortingData* sd) {
    int middle = (start + end) / 2;
    sd->incrementComparisons();
    if (arr[middle] < arr[start]) {
        sd->incrementSwaps();
        int tmp = arr[start];
        arr[start] = arr[middle];
        arr[middle] = tmp;
    }
    sd->incrementComparisons();
    if (arr[end] < arr[start]) {
        sd->incrementSwaps();
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
    }
    sd->incrementComparisons();
    if (arr[end] < arr[middle]) {
        sd->incrementSwaps();
        int tmp = arr[middle];
        arr[middle] = arr[end];
        arr[end] = tmp;
    }
    return arr[middle];
}

void MedianThreePivotQuickSort::quickSort(int* arr, int start, int end, SortingData* sd) {
    int i = start;
    int j = end;
    partition(arr, &i, &j, sd);
    if (start < j) {
        quickSort(arr, start, j, sd);
    }
    if (i < end) {
        quickSort(arr, i, end, sd);
    }
}

void MedianThreePivotQuickSort::partition(int *arr, int *i, int *j, SortingData *sd) {
    int median = medianThree(arr, *i, *j, sd);
    while (*i <= *j) {
        sd->incrementComparisons();
        while (arr[*i] < median) {
            sd->incrementComparisons();
            (*i)++;
        }
        sd->incrementComparisons();
        while (arr[*j] > median) {
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

MedianThreePivotQuickSort::~MedianThreePivotQuickSort() = default;
