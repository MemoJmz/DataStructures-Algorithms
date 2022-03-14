#include <iostream>
#include <string>
using namespace std;

class Contacto{
    public:
    string nombre;
    string numero;
    string email;

    Contacto* siguiente;
    Contacto* anterior;

    Contacto(string nombre, string numero, string email);
    ~Contacto();
};

class ListaContactos{
    public:
    Contacto* head;     // Contacto 0
    Contacto* contacto_actual;  // Contacto en el que te encuentras

    ListaContactos();
    ~ListaContactos();

    void agregar_contacto(int n, Contacto* contacto);
    void eliminar_contacto(int n);
    void mostrar_lista();
};