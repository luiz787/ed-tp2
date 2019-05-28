#ifndef ED_TP2_CLASSICQUICKSORT_HPP
#define ED_TP2_CLASSICQUICKSORT_HPP

#include "QuickSort.hpp"

class ClassicQuickSort : public QuickSort {
private:
    void quickSort(int *arr, int start, int right, SortingData* sd) override;
public:
    SortingData sort(int* arr, int size);
    static void partition(int *arr, int pivot, int* i, int* j, SortingData* sd);
    ~ClassicQuickSort() override;
};

#endif //ED_TP2_CLASSICQUICKSORT_HPP
