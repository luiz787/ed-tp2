#include "InsertionSort.hpp"

void InsertionSort::sort(int *arr, int start, int end, SortingData* sd) {
    int key;
    int j;
    for (int i = start + 1; i <= end; ++i) {
        key = arr[i];
        j = i - 1;
        sd->incrementComparisons();
        while (j >= 0 && arr[j] > key) {
            sd->incrementComparisons();
            arr[j + 1] = arr[j];
            j--;
        }
        sd->incrementSwaps();
        arr[j + 1] = key;
    }
}
