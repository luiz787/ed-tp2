#include "NonRecursiveQuickSort.hpp"
#include "Stack.hpp"

/*
* QuickSort clássico. A escolha do pivô é o elemento central.
*
* @param arr - vetor a ser ordenado.
* @param start - início do vetor.
* @param end - final do vetor.
* @param sd - objeto que contabiliza informações sobre a execução do algoritmo de ordenação
*/
void NonRecursiveQuickSort::quickSort(int* arr, int start, int end, SortingData* sd) {
    Stack<int> stack = Stack<int>();
    /*
     * Insere end antes, pois como a pilha é LIFO, ao remover dela, o primeiro elemento será o start.
     */
    stack.push(end);
    stack.push(start);

    while (!stack.isEmpty()) { // Continua enquanto houver índices na pilha.
        int currentLeft = stack.pop();
        int currentRight = stack.pop();

        int left = currentLeft;
        int right = currentRight;

        int pivot = arr[(left + right) / 2]; // Pivotação pelo elemento central.
        this->partition(arr, pivot, &left, &right, sd); // Chama o método de partição do ClassicQuickSort.

        // Se right for maior que currentLeft, coloca na pilha o intervalo [currentLeft, right]
        if (currentLeft < right) {
            stack.push(right);
            stack.push(currentLeft);
        }
        // Se currentRight for maior que left, coloca na pilha o intervalo [left, currentRight]
        if (left < currentRight) {
            stack.push(currentRight);
            stack.push(left);
        }

        // Condição de parada: não insere nada na pilha.
    }
}

/*
 * Destrutor padrão.
 */
NonRecursiveQuickSort::~NonRecursiveQuickSort() = default;
