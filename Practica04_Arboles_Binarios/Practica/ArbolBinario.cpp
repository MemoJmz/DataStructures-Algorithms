#include <iostream>

#include "ArbolBinario.hpp"

/* Constructor de Nodo */
Nodo::Nodo(int x){
    id = x;
    left = right = NULL;
}

/* Destructor de Nodo */
Nodo::~Nodo(){
    /* La destrucción es recursiva y se hace mientras existan nodos hijos*/ 
    if(left) delete left;
    if(right) delete right;
}

/* Constructor del Arbol Binario */
ArbolBinario::ArbolBinario(int* inorder, int* posorder, int N){
    raiz = crearArbol(inorder, posorder, N);
    size = N;
}

/* Destructor del Arbol Binario */
ArbolBinario::~ArbolBinario(){
    /* Por la implementación del destructor Nodo basta con destruir el nodo cabeza */
    if(!raiz) delete raiz;
}

/* La siguiente función creará el árbol de manera recursiva */
Nodo* ArbolBinario::crearArbol(int* inorder, int* posorder, int N){
    Nodo* padre = new Nodo(posorder[N-1]);
    int i = 0;

    /* Encontramos el indice para partir el arreglo */
    while(inorder[i] != padre->id){ i++; }

    /* Como asignamos los subarreglos a cada nodo hijo */
    if( i>0 )
        padre->left = crearArbol(inorder, posorder, i);
    if( N-(i+1) > 0 )
        padre->right = crearArbol(inorder+i+1, posorder+i, N-(i+1));
    
    /* Condiciones de paro */
    return padre;
}

/* Hice uso de una función auxiliar */
int* ArbolBinario:: recorrido_preorder(){
    if(raiz!=NULL){
        int* idx = new int[size];
        _preorder(raiz, idx);
        return idx;
    } else
        return NULL;
}

/* El apuntador del arreglo va variando como indice y para escribir el valor accedo a la dirección de memoria */
int* ArbolBinario::_preorder(Nodo* padre, int* idx){
    *idx++ = padre->id;
    if ( padre->left )
        idx = _preorder(padre->left, idx);
    if ( padre->right)
        idx = _preorder(padre->right, idx);
    
    return idx;
}

