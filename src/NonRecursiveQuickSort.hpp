#ifndef ED_TP2_NONRECURSIVEQUICKSORT_HPP
#define ED_TP2_NONRECURSIVEQUICKSORT_HPP

#include "QuickSort.hpp"
#include "ClassicQuickSort.hpp"

class NonRecursiveQuickSort : public ClassicQuickSort {
public:
    void quickSort(int* arr, int start, int end, SortingData* sd) override;
    ~NonRecursiveQuickSort() override;
};

#endif //ED_TP2_NONRECURSIVEQUICKSORT_HPP
