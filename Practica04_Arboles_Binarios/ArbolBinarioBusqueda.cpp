#include "ArbolBinarioBusqueda.hpp"

#include <iostream>

Nodo::Nodo(int k){
    id = k;
    left = right = NULL;
}

Nodo::~Nodo() {
    if (left != NULL)
        delete left;
    if (right != NULL)
        delete right;
}

ArbolBinarioBusqueda::ArbolBinarioBusqueda() {
    /* En principio aquí no va nada pero preferiremos hacer lo siguiente */
    raiz = NULL;
}

ArbolBinarioBusqueda::~ArbolBinarioBusqueda() {
    /* Copiar y pegar en la tarea :v */
    /* Solo necesitamos definir el destructor de los nodos */
    if (raiz != NULL)
        delete raiz;
}

void ArbolBinarioBusqueda::insert(int k){
    if(raiz == NULL)
        raiz = new Nodo(k);
    else
        _insert(raiz, k);

    return;
}

void ArbolBinarioBusqueda::_insert(Nodo* actual, int  k){
    if (k < actual->id){
        if( actual->left == NULL)
            actual->left = new Nodo(k);
        else
            _insert(actual->left, k);
    } else {
        if( actual->right == NULL)
            actual->right = new Nodo(k);
        else
            _insert(actual->right, k);
    }
}

bool ArbolBinarioBusqueda::find(int k){
    return _find(raiz, k);
}

bool ArbolBinarioBusqueda::_find(Nodo* actual, int  k){
    if (actual == NULL)
        return false;

    if ( k < actual->id )
        return _find(actual->left, k);
    else if (k > actual->id)
        return _find(actual->right, k);
    else
        return true;
}
