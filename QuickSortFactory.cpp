#include "QuickSortFactory.hpp"
#include "ClassicQuickSort.hpp"
#include "ThreeMedianPivotQuickSort.hpp"
#include "FirstElementPivotQuickSort.hpp"
#include "OnePercentInsertionQuickSort.hpp"
#include "FivePercentInsertionQuickSort.hpp"
#include "TenPercentInsertionQuickSort.hpp"
#include "NonRecursiveQuickSort.hpp"


QuickSort* QuickSortFactory::getQuickSort(std::string type) {
    if (type == "QC") {
        return new ClassicQuickSort();
    }
    if (type == "QM3") {
        return new ThreeMedianPivotQuickSort();
    }
    if (type == "QPE") {
        return new FirstElementPivotQuickSort();
    }
    if (type == "QP1") {
        return new OnePercentInsertionQuickSort();
    }
    if (type == "QP5") {
        return new FivePercentInsertionQuickSort();
    }
    if (type == "QP10") {
        return new TenPercentInsertionQuickSort();
    }
    if (type == "QNR") {
        return new NonRecursiveQuickSort();
    }
}
