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
    sd->incrementSwaps();
    int tmp = arr[middle];
    arr[middle] = arr[end];
    arr[end] = tmp;
    return arr[end];
}

void MedianThreePivotQuickSort::quickSort(int* arr, int start, int end, SortingData* sd) {
    if (start >= end) {
        return;
    }
    int pivot = partition(arr, start, end, sd);
    quickSort(arr, start, pivot - 1, sd);
    quickSort(arr, pivot + 1, end, sd);
}

int MedianThreePivotQuickSort::partition(int *arr, int start, int end, SortingData *sd) {
    int median = medianThree(arr, start, end, sd);
    int i = start;
    int j = end - 1;
    while (true) {
        while (arr[i] < median) {
            sd->incrementComparisons();
            i++;
        }
        while (median < arr[j]) {
            sd->incrementComparisons();
            j--;
        }
        if (i < j) {
            sd->incrementSwaps();
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        } else {
            break;
        }
    }
    sd->incrementSwaps();
    int tmp = arr[i];
    arr[i] = arr[end];
    arr[end] = tmp;
    return i;
}

MedianThreePivotQuickSort::~MedianThreePivotQuickSort() = default;
