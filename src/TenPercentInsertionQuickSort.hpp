#ifndef ED_TP2_TENPERCENTINSERTIONQUICKSORT_HPP
#define ED_TP2_TENPERCENTINSERTIONQUICKSORT_HPP

#include "QuickSort.hpp"
#include "MedianThreePivotQuickSort.hpp"

class TenPercentInsertionQuickSort : public MedianThreePivotQuickSort {
public:
    SortingData sort(int* arr, int size) override;
    ~TenPercentInsertionQuickSort() override;
private:
    long threshold;
    void quickSort(int* arr, int start, int end, SortingData* sd) override;
};

#endif //ED_TP2_TENPERCENTINSERTIONQUICKSORT_HPP
