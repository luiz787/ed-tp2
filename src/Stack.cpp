#include "Stack.hpp"

template<class T>
Stack<T>::Stack() {
    this->size = 0;
    this->head = new Node<T>(0);
}

template<class T>
void Stack<T>::push(T item) {
    auto newNode = new Node<T>(item);
    newNode->setNext(this->head);
    this->head = newNode;
    this->size++;
}

template<class T>
T Stack<T>::pop() {
    if (this->isEmpty()) {
        return -1;
    }
    auto popped = head;
    this->head = popped->getNext();
    auto data = popped->getData();

    delete popped;
    this->size--;

    return data;
}

template<class T>
bool Stack<T>::isEmpty() {
    return this->size == 0;
}

template<class T>
Stack<T>::~Stack() {
    delete this->head;
}

template class Stack<int>;
