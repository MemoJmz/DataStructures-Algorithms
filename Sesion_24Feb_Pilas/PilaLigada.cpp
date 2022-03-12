#include <iostream>
#include <cstdlib>
#include "listaQ.h"
using namespace std;
using namespace Lista;
 
class Pila
{
    listaSimple L;
 
public:
    Pila();         // constructor
    ~Pila();                       // destructor
    void push(int x);
    int pop();
    void imprime();

};

Pila::Pila(){
    L=listaSimple();
}

Pila::~Pila(){
    //free(L);
}

void Pila::push(int x){
    L.inserta_al_final(x);
}

int Pila::pop(){
    return L.elimina_del_inicio();
}

void Pila::imprime(){
    L.imprimeLista();
}

int main(){
    Pila P;
    P.push(1);
    P.push(2);
    P.push(3);

    P.imprime();

    return 0;
}
