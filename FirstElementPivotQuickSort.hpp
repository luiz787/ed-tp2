#ifndef ED_TP2_FIRSTELEMENTPIVOTQUICKSORT_HPP
#define ED_TP2_FIRSTELEMENTPIVOTQUICKSORT_HPP


#include "QuickSort.hpp"

class FirstElementPivotQuickSort : public QuickSort {
public:
    void quickSort(int* arr, int start, int end, SortingData* sd) override;
    ~FirstElementPivotQuickSort() override;
private:
    static int partition(int* arr, int start, int end, SortingData* sd);
};

#endif //ED_TP2_FIRSTELEMENTPIVOTQUICKSORT_HPP
