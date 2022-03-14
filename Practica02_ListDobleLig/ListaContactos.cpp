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
    // Head o Contacto 0 Nulo
    head = new Contacto("","","");
    contacto_actual = head;
}

ListaContactos::~ListaContactos()
{   
    Contacto *aux = head, *d;
    while (aux) {      // aux != nullptr, Mientras haya contacto
        d = aux;
        aux = aux->siguiente;
        delete d;   // Eliminamos contacto desde la cabeza
    }
}

void ListaContactos::agregar_contacto(int n, Contacto* contacto)
{
    int i = 0;
    // Nos encontramos en el contacto actual
    Contacto *aux = contacto_actual;
    // El primer if pregunta basicamente si n es positivo o negativo, en su interior realiza
    // relativamente las mismas acciones: mientras la posición sea válida y haya contactos en
    // esa dirección nos movemos en otro caso [ERROR] Posicion no valida
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

    // Agregamos al contacto a la derecha del contacto que nos encontramos (aux)
    contacto->siguiente = aux->siguiente;
    contacto->anterior = aux;
    // En caso de que haya siguiente contacto le decimos que apunte al que agregamos
    if (aux->siguiente != nullptr)
        aux->siguiente->anterior = contacto;
    // En caso de que no haya otro contacto
    aux->siguiente = contacto;

    // Fijamos el contacto actual al que acabamos de agregar
    contacto_actual = contacto;
}

void ListaContactos::eliminar_contacto(int n)
{
    int i = 0;
    // Nos ubicamos en el contacto actual
    Contacto *aux = contacto_actual;
    // El primer if pregunta si te moveras a la derecha o izquierda (n>0 o n<0)
    // y con el else hace básicamente la misma cosa:
    // Mientras haya contacto y posición válida nos movemos,
    // en otro caso regresamos [ERROR] POsicion no valida
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

    // No podemos eliminar el Contacto 0 Head
    if (aux == head) {
        cout << "[ERROR] Posicion no valida\n";
        return;
    }

    // Ahora el contacto actual será el anterior al que eliminaremos
    contacto_actual = aux->anterior;
    // El anterior apuntara a mi siguiente
    aux->anterior->siguiente = aux->siguiente;
    // Si hay contacto despues de mi
    if (aux->siguiente != nullptr)
        // El siguiente apuntará a mi anterior
        aux->siguiente->anterior = aux->anterior;
    // Liberamos memoria y mostramos los datos del contacto eliminado
    delete aux;
}

void ListaContactos::mostrar_lista()
{
    Contacto* aux = head->siguiente;
    // No consideramos el contacto (nodo) head 0
    int i = 1;
    std::cout << "\n##### Lista de Contactos #####\n";
    while (aux != nullptr) {    // Mientras haya contactos
        std::cout << i++ << ". " << aux->nombre << "\n";    // mostramos su nombre en pantalla
        aux = aux->siguiente;       // y nos movemos al siguiente contacto
    }
    std::cout << "##########\n";
    return;
}
