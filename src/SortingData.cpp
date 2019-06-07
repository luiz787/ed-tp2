#include "SortingData.hpp"

SortingData::SortingData() {
    comparisions = 0;
    swaps = 0;
}

uint64_t SortingData::getComparisons() {
    return comparisions;
}

uint64_t SortingData::getSwaps() {
    return swaps;
}

void SortingData::incrementComparisons() {
    comparisions++;
}

void SortingData::incrementSwaps() {
    swaps++;
}
