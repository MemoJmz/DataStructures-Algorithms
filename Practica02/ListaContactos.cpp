#include <iostream>
#include "ListaContactos.h"

/*----------- Definición de los métodos de la Clase Contacto----------------*/
// Constructor de contacto
Contacto::Contacto(string nombre, string numero, string email){
    this->nombre = nombre;
    this->numero = numero;
    this->email = email;

    siguiente = NULL;
    anterior = NULL;
}

Contacto::~Contacto(){
}


/*----------------------Definicion de los métodos de la Clase AgendaTel-------------*/

// Constructor de ListaContactos
ListaContactos::ListaContactos(){
    head = new Contacto("", "", "");
    contacto_actual = head;
}

ListaContactos::~ListaContactos(){
    Contacto* aux = head->siguiente;
    while(head->siguiente){
        
    }
    head = NULL;
    return;
}

void ListaContactos::agregar_contacto(int n, Contacto* contacto){
    Contacto* aux = head;
    int i=0;
    while(aux->siguiente && i<=n){
        i++;
        aux = aux->siguiente;
    }
    if(i==n){
        contacto->siguiente = aux->siguiente;
        contacto->anterior = aux;
        contacto_actual = contacto;
    }
    else{
        std::cout << "[ERROR] Posicion no valida\n";
    }
    return;
}

void ListaContactos::eliminar_contacto(int n){
    Contacto* aux = head;
    int i=1;    // Elimina la posibilidad de que se elimine head
    while(aux->siguiente && i<=n){
        i++;
        aux = aux->siguiente;
    }
    if(i==n){
        contacto_actual = aux->anterior;
        std::cout << "Se ha eliminado el contacto:\n";
        std::cout << "Nombre: " << aux->nombre << "\n";
        std::cout << "Numero: " << aux->numero << "\n";
        std::cout << "Email: " << aux->email << "\n";
        delete(aux);
        return;
    }
    else{
        cout << "[ERROR] Posicion no valida\n";
    }
}

void ListaContactos::mostrar_lista(){
    Contacto* aux = head->siguiente;
    std::cout << "Lista de Contactos: \n";

    while(aux){
        std::cout << "Se ha eliminado el contacto:\n";
        std::cout << "Nombre: " << aux->nombre << "\n";
        std::cout << "Numero: " << aux->numero << "\n";
        std::cout << "Email: " << aux->email << "\n";
    }
    return;
}