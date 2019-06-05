#include "NonRecursiveQuickSort.hpp"
#include "Stack.hpp"

void NonRecursiveQuickSort::quickSort(int* arr, int start, int end, SortingData* sd) {
    Stack<int> stack = Stack<int>();
    stack.push(start);
    stack.push(end);

    while (!stack.isEmpty()) {
        int i = start;
        int j = end;
        int pivot = arr[(start + end) / 2];
        this->partition(arr, pivot, &i, &j, sd);

        if (true) { // TODO: push condition
            stack.push(start);
            stack.push(i);
        }
        if (true) { // TODO: push condition
            stack.push(j);
            stack.push(end);
        }
    }

}

NonRecursiveQuickSort::~NonRecursiveQuickSort() = default;
