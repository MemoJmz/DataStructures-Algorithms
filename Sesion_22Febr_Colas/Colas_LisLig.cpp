#include <iostream>
#include <cstdlib>
#include "lista.h"
using namespace std;
using namespace Lista;
 
 
// A class to represent a stack
class Cola
{
    listaSimple L;
 
public:
    Cola();         // constructor
    ~Cola();                       // destructor
 
    void encolar(int);
    int desencolar();
    int size();
    void imprime();
    bool isEmpty();
    bool isFull();
};
 
// Constructor to initialize the stack
Cola::Cola(){
    L=listaSimple();
}
 
// Destructor to free memory allocated to the stack
Cola::~Cola() {
}
 
// Funcion para agregar un elemento a la cola
void Cola::encolar(int x)
{
    L.inserta_al_final(x);
}

int Cola::desencolar()
{
    int x=0;
    L.elimina_del_inicio();
    return x;
}

void Cola::imprime(){
    L.imprimeLista();
}

int Cola::size() {
    return 0;
}

bool Cola::isEmpty() {
  return false;
}

bool Cola::isFull() {
    return false;
}

int main()
{
    Cola Q=Cola();
    Q.encolar(10);
    Q.encolar(11);
    Q.imprime();
    Q.desencolar();
    Q.imprime();
 
    return 0;
}