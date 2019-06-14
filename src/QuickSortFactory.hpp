#ifndef ED_TP2_QUICKSORTFACTORY_HPP
#define ED_TP2_QUICKSORTFACTORY_HPP

#include <string>
#include "QuickSort.hpp"

class QuickSortFactory {
public:
    /*
    * Função "Factory" de quickSorts. Retorna um objeto adequado, de acordo com o tipo especificado no parâmetro.
    *
    * @param type - tipo de quickSort, conforme especificação.
    *
    * @returns objeto QuickSort.
    */
    static QuickSort* getQuickSort(std::string type);
};

#endif //ED_TP2_QUICKSORTFACTORY_HPP
