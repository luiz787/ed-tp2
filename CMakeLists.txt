cmake_minimum_required(VERSION 3.14)
project(ed_tp2)

set(CMAKE_CXX_STANDARD 11)

add_executable(ed_tp2 src/main.cpp src/QuickSortFactory.hpp src/QuickSort.hpp src/ClassicQuickSort.cpp src/ClassicQuickSort.hpp src/VectorType.hpp src/VectorType.cpp src/QuickSortFactory.cpp src/MedianThreePivotQuickSort.cpp src/MedianThreePivotQuickSort.hpp src/FirstElementPivotQuickSort.cpp src/FirstElementPivotQuickSort.hpp src/OnePercentInsertionQuickSort.cpp src/OnePercentInsertionQuickSort.hpp src/FivePercentInsertionQuickSort.cpp src/FivePercentInsertionQuickSort.hpp src/TenPercentInsertionQuickSort.cpp src/TenPercentInsertionQuickSort.hpp src/NonRecursiveQuickSort.cpp src/NonRecursiveQuickSort.hpp src/SortingData.cpp src/SortingData.hpp src/InsertionSort.cpp src/InsertionSort.hpp src/Stack.cpp src/Stack.hpp src/Node.cpp src/Node.hpp)