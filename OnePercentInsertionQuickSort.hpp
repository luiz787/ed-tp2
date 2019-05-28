#ifndef ED_TP2_ONEPERCENTINSERTIONQUICKSORT_HPP
#define ED_TP2_ONEPERCENTINSERTIONQUICKSORT_HPP

#include "QuickSort.hpp"

class OnePercentInsertionQuickSort : public QuickSort {
public:
    void quickSort(int* arr, int start, int end, SortingData* sd) override;
    ~OnePercentInsertionQuickSort() override;
};

#endif //ED_TP2_ONEPERCENTINSERTIONQUICKSORT_HPP
