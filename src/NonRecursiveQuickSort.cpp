#include "NonRecursiveQuickSort.hpp"
#include "Stack.hpp"

void NonRecursiveQuickSort::quickSort(int* arr, int start, int end, SortingData* sd) {
    Stack<int> stack = Stack<int>();
    stack.push(end);
    stack.push(start);

    while (!stack.isEmpty()) {
        int currentLeft = stack.pop();
        int currentRight = stack.pop();

        int left = currentLeft;
        int right = currentRight;

        int pivot = arr[(left + right) / 2];
        this->partition(arr, pivot, &left, &right, sd);

        if (currentLeft < right) {
            stack.push(right);
            stack.push(currentLeft);
        }
        if (left < currentRight) {
            stack.push(currentRight);
            stack.push(left);
        }
    }
}

NonRecursiveQuickSort::~NonRecursiveQuickSort() = default;
