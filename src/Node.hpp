#ifndef ED_TP2_NODE_HPP
#define ED_TP2_NODE_HPP

/*
 * Classe que representa um nó, utilizado em uma pilha. Esse nó possui um dado do tipo genérico T, e um ponteiro para
 * outro nó (próximo).
 */
template<class T>
class Node {
private:
    T data;
    Node<T>* next;
public:
    explicit Node(T data);
    Node<T>* getNext() const;
    void setNext(Node<T>* next);
    T getData() const ;
};

#endif //ED_TP2_NODE_HPP
