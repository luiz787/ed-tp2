#include "QuickSortFactory.hpp"
#include "ClassicQuickSort.hpp"
#include "MedianThreePivotQuickSort.hpp"
#include "FirstElementPivotQuickSort.hpp"
#include "OnePercentInsertionQuickSort.hpp"
#include "FivePercentInsertionQuickSort.hpp"
#include "TenPercentInsertionQuickSort.hpp"
#include "NonRecursiveQuickSort.hpp"


QuickSort* QuickSortFactory::getQuickSort(std::string type) {
    // Função "Factory" de quickSorts. Retorna um objeto adequado, de acordo com o tipo especificado no parâmetro.
    if (type == "QC") {
        return new ClassicQuickSort();
    }
    if (type == "QM3") {
        return new MedianThreePivotQuickSort();
    }
    if (type == "QPE") {
        return new FirstElementPivotQuickSort();
    }
    if (type == "QI1") {
        return new OnePercentInsertionQuickSort();
    }
    if (type == "QI5") {
        return new FivePercentInsertionQuickSort();
    }
    if (type == "QI10") {
        return new TenPercentInsertionQuickSort();
    }
    return new NonRecursiveQuickSort();
}
