#ifndef ED_TP2_STACK_HPP
#define ED_TP2_STACK_HPP

#include <cstdint>
#include "Node.hpp"

template<class T>
class Stack {
private:
    uint32_t size;
    Node<T>* head;
public:
    Stack();
    ~Stack();
    void push(T item);
    T pop();
    bool isEmpty();
};

#endif //ED_TP2_STACK_HPP
