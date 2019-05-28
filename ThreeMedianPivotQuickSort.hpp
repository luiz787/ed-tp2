#ifndef ED_TP2_THREEMEDIANPIVOTQUICKSORT_HPP
#define ED_TP2_THREEMEDIANPIVOTQUICKSORT_HPP


#include "QuickSort.hpp"

class ThreeMedianPivotQuickSort : public QuickSort {
public:
    void quickSort(int* arr, int start, int end, SortingData* sd) override;
    ~ThreeMedianPivotQuickSort() override;
};

#endif //ED_TP2_THREEMEDIANPIVOTQUICKSORT_HPP
