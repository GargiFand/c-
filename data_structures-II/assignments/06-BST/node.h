//*****************************************************************************************************
//
//      This header file defines a templated struct that represents a node in a binary tree.
//
//*****************************************************************************************************

#ifndef NODE_H
#define NODE_H

//*****************************************************************************************************

template <typename T>
struct Node {
    T value;
    Node<T> *left;
    Node<T> *right;

    Node();
    Node(const T &v, Node<T> *l = nullptr, Node<T> *r = nullptr);
};

//*****************************************************************************************************

template <typename T>
Node<T>::Node() {
    value = T();
    left = nullptr;
    right = nullptr;
}

//*****************************************************************************************************

template <typename T>
Node<T>::Node(const T &v, Node<T> *l, Node<T> *r) {
    value = v;
    left = l;
    right = r;
}

//*****************************************************************************************************

#endif