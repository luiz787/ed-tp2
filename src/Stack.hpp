#ifndef ED_TP2_STACK_HPP
#define ED_TP2_STACK_HPP

#include <cstdint>
#include "Node.hpp"
/*
 * Pilha genérica, que pode crescer arbitrariamente.
 */
template<class T>
class Stack {
private:
    uint32_t size;
    Node<T>* head;
public:
    /*
     * Construtor.
     */
    Stack();
    /*
     * Destrutor.
     */
    ~Stack();
    /*
     * Adiciona um item no topo da pilha.
     *
     * @param item - item a ser empilhado.
     */
    void push(T item);
    /*
     * Remove um item do topo da pilha.
     *
     * @returns item que foi desempilhado.
     */
    T pop();
    /*
     * Determina se a pilha está vazia.
     *
     * @returns true se a pilha estiver vazia.
     */
    bool isEmpty();
};

#endif //ED_TP2_STACK_HPP
