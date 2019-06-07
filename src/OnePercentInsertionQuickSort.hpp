#ifndef ED_TP2_ONEPERCENTINSERTIONQUICKSORT_HPP
#define ED_TP2_ONEPERCENTINSERTIONQUICKSORT_HPP

#include "QuickSort.hpp"
#include "MedianThreePivotQuickSort.hpp"

class OnePercentInsertionQuickSort : public MedianThreePivotQuickSort {
public:
    SortingData sort(int* arr, int size) override;
    ~OnePercentInsertionQuickSort() override;
private:
    long threshold;
    void quickSort(int* arr, int start, int end, SortingData* sd) override;
};

#endif //ED_TP2_ONEPERCENTINSERTIONQUICKSORT_HPP
