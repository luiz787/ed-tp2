#ifndef ED_TP2_CLASSICQUICKSORT_HPP
#define ED_TP2_CLASSICQUICKSORT_HPP

#include "QuickSort.hpp"

class ClassicQuickSort : public QuickSort {
public:
    ~ClassicQuickSort() override;
protected:
    static void partition(int *arr, int pivot, int* i, int* j, SortingData* sd);
private:
    void quickSort(int *arr, int start, int right, SortingData* sd) override;
};

#endif //ED_TP2_CLASSICQUICKSORT_HPP
