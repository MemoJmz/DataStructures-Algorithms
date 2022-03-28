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

// Realiza la eliminación 
Nodo* AVL::erase(Nodo* r, int key){
    // Se lleva a cabo la eliminación normal del BST
    if(r == NULL)
        return r;
    
    // Si key < r->key, entonces se encuentra en el subarbol izquierdo
    if(key < r->key)
        r->left = erase(r->left, key);
    
    // Si key > r->key, entonces se encuentra en el subarbol derecho
    else if(key > r->key)
        r->right = erase(r->right, key);
    
    // Si key == r->key, r es el nodo a eliminar
    else{
        // Nodo con uno o sin hijos
        if((r->left == NULL) || (r->left == NULL)){
            Nodo* tmp = r->left ? r->left : r->right;

            // Caso sin hijos
            if(tmp = NULL){
                tmp = r;
                r = NULL;
            }
            else // Caso un solo hijo
                *r = *tmp; // Copia el contenido del hijo no vacio

            delete tmp;
        }
        else{
            // Nodos con dos hijos
            Nodo* tmp = min(r->right);

            // Copia el dato del sucesor
            r->key = tmp->key;

            // Elimina el sucesor
            r->right = erase(r->right, tmp->key);
        }
    }
    // Si el arbol tiene solo un nodo
    if(r == NULL)
        return r;
    
    // Actualizamos la altura del nodo
    r->height = 1 + max(get_height(r->left), get_height(r->right));

    // Calculamos el factor de balanceo
    int balance = get_balance(r);

    // Si el nodo esta desbalanceado tneemos 4 casos

    // Desbalance Izq-Izq
    if (balance > 1 && get_balance(r->left) >= 0)
        return rightRotate(r);
 
    // Desbalance Izq-Der
    if (balance > 1 && get_balance(r->left) < 0){
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    
    // Desbalance Der-Izq
    if (balance < -1 && get_balance(r->right) > 0)
    {
        root->right = rightRotate(r->right);
        return leftRotate(r);
    }
    // Desbalance Der-Der
    if (balance < -1 && get_balance(r->right) <= 0)
        return leftRotate(r);
    
    return r;
}

// Regresa la ubicación del nodo
Nodo* AVL::search(Nodo*r, int key){
    // Si no hay nodo o si es el buscado
    if(r == NULL || r->key == key)
        return r;

    // Si la clave es mayor que r->key
    if(r->key < key)
        return search(r->right, key);
    
    // Si la clave es menor que r->key
    if(r->key > key)
        return search(r->left, key);
}

// Regresa el nodo con la menor clave
Nodo* AVL::min(Nodo* r){
    Nodo* tmp = r;

    while(tmp->left != NULL)
        tmp = tmp->left;

    return tmp;
}

// --------------------------- Set functions -----------------------------------

void Set::add(int n){
    
}

void Set::remove(int n){

}

bool Set::exists(int n){
    
}

