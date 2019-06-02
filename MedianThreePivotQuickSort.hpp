#ifndef ED_TP2_MEDIANTHREEPIVOTQUICKSORT_HPP
#define ED_TP2_MEDIANTHREEPIVOTQUICKSORT_HPP

#include "QuickSort.hpp"

class MedianThreePivotQuickSort : public QuickSort {
public:
    ~MedianThreePivotQuickSort() override;
protected:
    static int medianThree(int* arr, int start, int end, SortingData* sd);
    static int partition(int* arr, int start, int end, SortingData* sd);
private:
    void quickSort(int* arr, int start, int end, SortingData* sd) override;
};

#endif //ED_TP2_MEDIANTHREEPIVOTQUICKSORT_HPP
