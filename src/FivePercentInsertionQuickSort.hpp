#ifndef ED_TP2_FIVEPERCENTINSERTIONQUICKSORT_HPP
#define ED_TP2_FIVEPERCENTINSERTIONQUICKSORT_HPP

#include "QuickSort.hpp"
#include "MedianThreePivotQuickSort.hpp"

class FivePercentInsertionQuickSort : public MedianThreePivotQuickSort {
public:
    SortingData sort(int* arr, int size) override;
    ~FivePercentInsertionQuickSort() override;
private:
    long threshold;
    void quickSort(int* arr, int start, int end, SortingData* sd) override;
};

#endif //ED_TP2_FIVEPERCENTINSERTIONQUICKSORT_HPP
