#include <iostream>
#include <stdio.h>      // Esto para usar malloc
#include <stdlib.h>

using namespace std;

class listaEjemplo{

    typedef struct nodo{
        int info;
        nodo *next;
    } lista;

    lista *head;

public:
    // Creamos el constructor
    listaEjemplo(){
        head=NULL;      // La lista es vacía
    }
    // getters
    // Ahora ya soy capaz de obtener head
    lista *getHead(){ return head; }
    void inserta_elemento(int valor);
    void muestralista();
    void recorrelista();
    void eliminaElemento(int valor);
};

void listaEjemplo::inserta_elemento(int valor){
    lista *p;
    lista *previo;
    p = head;
    previo = NULL;
    lista *i;      // Este es el objeto que voy a insertar
    i = (lista*)malloc(sizeof(lista));      // Reservamos memoria

    i->info = valor;        // Almaceno valor como info del eleemnto de la lista
    while(p!=NULL){
        if(p->info <= i->info ){
            previo=p;
            p = p->next;
        }
        else{
            if(previo){
                previo->next = i;
                i->next = p;
                return;
            }
            else{
                head=i;     // Ahorita regresamos a este
                i->next=p;
                return;
            }
        }
    }
    if(previo){       // LLegaste al final de la lista
        previo->next=i;
    }
    else{       // La lista esta vacia, eres el primer elemento
        head = i;
        i->next = NULL;
        return;
    }
    return;
}

void listaEjemplo::muestralista() {
    lista *p = head;
    cout << "\nLISTA\n";
    while(p!= NULL){
        cout<<p->info<<"->";
        p = p->next;
    }
    cout<<"NULL";

    return;
}


//void listaEjemplo::recorrelista(){
//    while()
//}

//void listaEjemplo::eliminaElemento(int valor){
//    lista *p = getHead();
//    lista *previo;
//    previo=NULL;
//    while()
//}

/*
Pseudocódigo
crear nodo(int x)
1. Nodo <- Reserva Memoria
2. Nodo.info <- x
3. Nodo.next <- NULL
*/

int main(){
    listaEjemplo list1 = listaEjemplo();
    list1.inserta_elemento(2);
    list1.inserta_elemento(5);
    list1.inserta_elemento(1);
    list1.inserta_elemento(3);
    list1.muestralista();

    //list1.eliminaElemento(2);
    //list1.muestralista();
    
    //list1.eliminaElemento(2);
    //list1.muestralista();

    return 0;
}
