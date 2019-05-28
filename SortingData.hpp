#ifndef ED_TP2_SORTINGDATA_HPP
#define ED_TP2_SORTINGDATA_HPP

class SortingData {
private:
    int comparisions;
    int swaps;
public:
    SortingData();
    int getComparisons();
    int getSwaps();
    void incrementComparisons();
    void incrementSwaps();
};

#endif //ED_TP2_SORTINGDATA_HPP
