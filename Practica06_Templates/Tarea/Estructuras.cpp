#include <iostream>

#include "Estructuras.hpp"

// public AVL functions
/*Nodo::Nodo(int x){
    key = x;
    left = right = NULL;
}

Nodo::~Nodo(){
    if(left)
        delete left;
    if(right)
        delete right;
}*/

Nodo* AVL::insert(Nodo* r, int d){
    // Agregar el nodo cuando se encuentre un nodo nulo
    if(r = NULL){
        Nodo* tmp = new Nodo;
        tmp->key = d;
        tmp->left = tmp->right = NULL;
        return tmp;
    }
    // Recorre el sub-árbol izquierdo si el dato es menor que el actual nodo
    if(d < r->key) {
        r->left = insert(r->left, d);
        return r;
    }
    // Recorre el sub-árbol derecho si el dato es mayor que el actual
    else if(d > r->key){
        r->right = insert(r->right, d);
        return r;
    }
    else
        return r;
}

void AVL::erase(int key){

}

Nodo* AVL::search(int key){

}

// private AVL functions
unsigned int AVL::get_height(Nodo* root){
    unsigned int l = 0;

    if(!root){
        return 0;
    }

    if(root->left){
        
    }

}

int AVL::get_balance(Nodo* root){

}

void AVL::leftRotate(Nodo* root){

}

void AVL::rightRotate(Nodo* root){

}

int containsNodo(Nodo* r, int d){
    if ( r == NULL) {
        return 0;
    }
    int x = r->key == d ? 1 : 0;
    return x | containsNodo(r->left, d) | containsNodo(r->right, d);
}

// Set functions

void Set::add(int n){
    if(root == NULL){

    }
}

void Set::remove(int n){

}

bool Set::exists(int n){

}