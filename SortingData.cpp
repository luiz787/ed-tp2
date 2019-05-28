#include "SortingData.hpp"

SortingData::SortingData() {
    comparisions = 0;
    swaps = 0;
}

int SortingData::getComparisons() {
    return comparisions;
}

int SortingData::getSwaps() {
    return swaps;
}

void SortingData::incrementComparisons() {
    comparisions++;
}

void SortingData::incrementSwaps() {
    swaps++;
}
