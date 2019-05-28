#ifndef ED_TP2_QUICKSORTFACTORY_HPP
#define ED_TP2_QUICKSORTFACTORY_HPP

#include <string>
#include "QuickSort.hpp"

class QuickSortFactory {
public:
    static QuickSort* getQuickSort(std::string type);
};

#endif //ED_TP2_QUICKSORTFACTORY_HPP
