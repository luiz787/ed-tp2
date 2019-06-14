#include "Node.hpp"

template<class T>
Node<T>::Node(T data) {
    this->data = data;
    this->next = nullptr;
}

template<class T>
Node<T> *Node<T>::getNext() const {
    return this->next;
}

template<class T>
void Node<T>::setNext(Node<T> *next) {
    this->next = next;
}

template<class T>
T Node<T>::getData() const {
    return this->data;
}

template class Node<int>;
