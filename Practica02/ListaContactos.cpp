#include <iostream>
#include "ListaContactos.h"


Contacto::Contacto(string nombre, string numero, string email){
    this->nombre = nombre;
    this->numero = numero;
    this->email = email;

    siguiente = NULL;
    anterior = NULL;
}

Contacto::~Contacto(){
    std::cout << "Se ha eliminado el contacto:\n";
    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Numero: " << numero << "\n";
    std::cout << "Email: " << email << "\n";
    std::cout << "\n";
}


ListaContactos::ListaContactos()
{
    head = new Contacto("","","");
    contacto_actual = head;
}

ListaContactos::~ListaContactos()
{
    Contacto *aux = head, *d;
    while (aux != nullptr) {
        d = aux;
        aux = aux->siguiente;
        delete d;
    }
}

void ListaContactos::agregar_contacto(int n, Contacto* contacto)
{
    int i = 0;
    Contacto *aux = contacto_actual;
    if (n >= 0) {
        while (aux != nullptr && i < n) {
            aux = aux->siguiente;
            i++;
        }
        if (aux == nullptr || i != n) {
            cout << "[ERROR] Posicion no valida\n";
            return;
        }
    }
    else {
        while (aux != nullptr && i > n) {
            aux = aux->anterior;
            i--;
        }
        if (aux == nullptr || i != n) {
            cout << "[ERROR] Posicion no valida\n";
            return;
        }
    }

    contacto->siguiente = aux->siguiente;
    contacto->anterior = aux;
    if (aux->siguiente != nullptr)
        aux->siguiente->anterior = contacto;
    aux->siguiente = contacto;

    contacto_actual = contacto;
}

void ListaContactos::eliminar_contacto(int n)
{
    int i = 0;
    Contacto *aux = contacto_actual;
    if (n >= 0) {
        while (aux != nullptr && i < n) {
            aux = aux->siguiente;
            i++;
        }
        if (aux == nullptr || i != n) {
            cout << "[ERROR] Posicion no valida\n";
            return;
        }
    }
    else {
        while (aux != nullptr && i > n) {
            aux = aux->anterior;
            i--;
        }
        if (aux == nullptr || i != n) {
            cout << "[ERROR] Posicion no valida\n";
            return;
        }
    }

    if (aux == head) {
        cout << "[ERROR] Posicion no valida\n";
        return;
    }

    contacto_actual = aux->anterior;
    aux->anterior->siguiente = aux->siguiente;
    if (aux->siguiente != nullptr)
        aux->siguiente->anterior = aux->anterior;
    delete aux;
}

void ListaContactos::mostrar_lista()
{
    Contacto* aux = head->siguiente;
    int i = 1;
    std::cout << "\n##### Lista de Contactos #####\n";
    while (aux != nullptr) {
        std::cout << i++ << ". " << aux->nombre << "\n";
        aux = aux->siguiente;
    }
    std::cout << "##########\n";
    return;
}
