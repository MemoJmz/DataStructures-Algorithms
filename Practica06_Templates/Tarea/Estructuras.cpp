#include <iostream>

#include "Estructuras.hpp"

//----------------------------- AVL Tree Functions -----------------------------

// Util para actualziar la profundidad
int AVL::max(int a, int b)
{
    return (a > b)? a : b;
}

// Obtiene la altura del nodo
unsigned int AVL::get_height(Nodo* root){
    if(root == 0){
        return 0;
    }
    return root->height;
}

// Calcula el factor de balanceo
int AVL::get_balance(Nodo* root){
    if(root == NULL){
        return 0;
    }
    return get_height(root->left) - get_height(root->right);
}

// Realiza la rotación izquierda
Nodo* AVL::leftRotate(Nodo* root){
    Nodo* y = root->right;
    Nodo* tmp = root->left;

    // Realizamos la rotación
    y->left = root;
    root->right = tmp;
    
    // Actualizamos las alturas
    root->height = max(get_height(root->left), get_height(root->right)) + 1;
    y->height = max(get_height(y->left), get_height(y->right)) + 1;

    // Regresamos la nueva raiz
    return y;
}

// Realiza la rotación derecha
Nodo* AVL::rightRotate(Nodo* root){
    Nodo* x = root->left;
    Nodo* tmp = x->right;

    // Realizamos la rotación
    x->right = root;
    root->left = tmp;

    // Actualizamos las alturas
    root->height = max(get_height(root->left), get_height(root->right)) + 1;
    x->height = max(get_height(x->left), get_height(x->right)) + 1;

    // Regresamos la nueva raiz
    return x;
}

// Realiza la inserción
Nodo* AVL::insert(Nodo* r, int d){
    // Se lleva a cabo la inserción ususal de un BST
    // Agregar el nodo cuando se encuentre un nodo nulo
    if(r = NULL){
        Nodo* tmp = new Nodo;
        tmp->key = d;
        tmp->left = tmp->right = NULL;
        tmp->height = 1;
        return tmp;
    }
    // Recorre el sub-árbol izquierdo si el dato es menor que el actual nodo
    if(d < r->key) {
        r->left = insert(r->left, d);
    }
    // Recorre el sub-árbol derecho si el dato es mayor que el actual
    else if(d > r->key){
        r->right = insert(r->right, d);
    }
    // Tenemos un nodo repetido
    else
        std::cout << "[ERROR] Duplicate value" << std::endl;
        return r;

    // Actualizamos la altura del nodo
    r->height = 1 + max(get_height(r->left), get_height(r->right));

    // Obtenemos el factor de balanceo para saber cuando un nodo no esta balanceado
    int balance = get_balance(r);

    // Si es necesario el balanceo tenemos 4 casos

    // Desbalanceo Izq-Izq
    if(balance > 1 && d < r->left->key)
        return rightRotate(r);

    // Desbalanceo Izq-Der
    if(balance > 1 && d > r->left->key){
        r->left = leftRotate(r->left);
        return rightRotate(r);
    }

    // Desbalance Der-Izq
    if(balance < -1 && d < r->right->key){
        r->right = rightRotate(r->right);
        return leftRotate(r);
    }

    // Desbalance Der-Der
    if(balance < -1 && d > r->right->key)
        return leftRotate(r);

    // Regresamos el apuntador a nodo
    return r;
}

void AVL::erase(int key){

}

Nodo* AVL::search(int key){
    
}

// Contiene el nodo con clave d
// int containsNodo(int d){
//     if ( root == NULL) {
//         return 0;
//     }
//     int x = r->key == d ? 1 : 0;
//     return x | containsNodo(r->left, d) | containsNodo(r->right, d);
// }

// --------------------------- Set functions -----------------------------------

void Set::add(int n){

}

void Set::remove(int n){

}

bool Set::exists(int n){
    
}

