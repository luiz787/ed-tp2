#ifndef ED_TP2_FIVEPERCENTINSERTIONQUICKSORT_HPP
#define ED_TP2_FIVEPERCENTINSERTIONQUICKSORT_HPP

#include "QuickSort.hpp"

class FivePercentInsertionQuickSort : public QuickSort {
public:
    void quickSort(int* arr, int start, int end, SortingData* sd) override;
    ~FivePercentInsertionQuickSort() override;
};

#endif //ED_TP2_FIVEPERCENTINSERTIONQUICKSORT_HPP
