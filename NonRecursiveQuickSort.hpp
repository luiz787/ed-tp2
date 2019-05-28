#ifndef ED_TP2_NONRECURSIVEQUICKSORT_HPP
#define ED_TP2_NONRECURSIVEQUICKSORT_HPP

#include "QuickSort.hpp"

class NonRecursiveQuickSort : public QuickSort {
public:
    void quickSort(int* arr, int start, int end, SortingData* sd) override;
    ~NonRecursiveQuickSort() override;
};

#endif //ED_TP2_NONRECURSIVEQUICKSORT_HPP
