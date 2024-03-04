//*****************************************************************************************************
//
//      This header file defines a templated struct that represents a node in a Huffman tree.
//
//*****************************************************************************************************

#ifndef NODE_H
#define NODE_H

//*****************************************************************************************************

template <typename T>
struct Node {
    T value;
    double frequency;
    Node<T> *left;
    Node<T> *right;

    Node();
    Node(const T &v, Node<T> *l = nullptr, Node<T> *r = nullptr);
};

//*****************************************************************************************************

template <typename T>
Node<T>::Node() {
    value = T();
    frequency = 0;
    left = nullptr;
    right = nullptr;
}

//*****************************************************************************************************

template <typename T>
Node<T>::Node(const T &v, Node<T> *l, Node<T> *r) {
    value = v;
    frequency = 0;
    left = l;
    right = r;
}

//*****************************************************************************************************

#endif