#ifndef ED_TP2_SORTINGDATA_HPP
#define ED_TP2_SORTINGDATA_HPP

#include <cstdint>

/*
 * Classe que encapsula e faz contagens de comparações e trocas dos algoritmos de ordenação.
 */
class SortingData {
private:
    uint64_t comparisions;
    uint64_t swaps;
public:
    SortingData();
    uint64_t getComparisons();
    uint64_t getSwaps();
    void incrementComparisons();
    void incrementSwaps();
};

#endif //ED_TP2_SORTINGDATA_HPP
