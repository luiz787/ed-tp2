#ifndef ED_TP2_NODE_HPP
#define ED_TP2_NODE_HPP

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
