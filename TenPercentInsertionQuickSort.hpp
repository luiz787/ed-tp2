#ifndef ED_TP2_TENPERCENTINSERTIONQUICKSORT_HPP
#define ED_TP2_TENPERCENTINSERTIONQUICKSORT_HPP

#include "QuickSort.hpp"

class TenPercentInsertionQuickSort : public QuickSort {
public:
    void quickSort(int* arr, int start, int end, SortingData* sd) override;
    ~TenPercentInsertionQuickSort() override;
};

#endif //ED_TP2_TENPERCENTINSERTIONQUICKSORT_HPP
