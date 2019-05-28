#ifndef ED_TP2_QUICKSORT_HPP
#define ED_TP2_QUICKSORT_HPP

#include "SortingData.hpp"

class QuickSort {
private:
    virtual void quickSort(int* arr, int start, int end, SortingData* sd) = 0;
public:
    SortingData sort(int* arr, int size) {
        auto sd = SortingData();
        quickSort(arr, 0, size - 1, &sd);
        return sd;
    }

    virtual ~QuickSort() = default;
};

#endif //ED_TP2_QUICKSORT_HPP
