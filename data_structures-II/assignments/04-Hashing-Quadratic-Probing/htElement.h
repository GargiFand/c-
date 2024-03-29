//*****************************************************************************************************
//
//      This header file defines a template struct for storing elements in a hash table.
//
//*****************************************************************************************************

#ifndef HTELEMENT_H
#define HTELEMENT_H

//*****************************************************************************************************

template <typename T>
struct HTElement {
    T item;
    int status;

    HTElement();
};

//*****************************************************************************************************

template <typename T>
HTElement<T>::HTElement() {
    item = T();
    status = 0;
}

//*****************************************************************************************************

#endif