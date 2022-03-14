#include "Fila.hpp"
#include <iostream>

Persona::Persona(std::string nombre, std::string apellido, int edad) {
    this -> nombre = nombre;
    this -> apellido = apellido;
    this -> edad = edad;
    this -> siguiente = NULL;
}

// Notemos que primero es llamada esta función y trabaja de forma recursiva
Persona::~Persona() {
    if (siguiente)
        delete siguiente;
    siguiente = NULL;
    return;
}

Fila::Fila() {
    head = new Persona("", "", -1);
}

Fila::~Fila() {
    delete head;
}

// removemos la persona enfrete de caller
// caller es una persona en la fila
void Fila::remover_enfrente(Persona* caller) {
    Persona* next = caller -> siguiente;    // persona next será/es la siguiente del que habló (caller)
    if (!next) // Si no hay persona pos no hagas nada :v
        return;
    
    caller -> siguiente = next -> siguiente;
    next -> siguiente = NULL;
    delete next;

    return;
}

void Fila::poner_enfrente(Persona* caller, Persona* persona) {
    Persona* next = caller -> siguiente;
    caller -> siguiente = persona;
    persona -> siguiente = next;

    /* // ¿Por qué no éste código?
    persona->siguiente = caller->siguiente;
    caller->siguiente = persona;
    */
    return;
}

void Fila::atender() {
    Persona* aux = head;
    Persona* sig = aux -> siguiente;

    if (sig == NULL)
        return;

    while (sig -> siguiente) {
        aux = aux -> siguiente;
        sig = sig -> siguiente;
    }

    remover_enfrente(aux);
    return;
}

void Fila::mostrar_lista() {
    Persona* aux = head -> siguiente;

    while (aux) {
        std::cout << aux -> nombre << "\n";
        aux = aux -> siguiente;
    }

    return;
}

void Fila::meter_atras(Persona* persona) {
    poner_enfrente(head, persona);
    return;
}

void Fila::remover_atras() {
    remover_enfrente(head);
    return;
}
