#include <iostream>
#include "ListaContactos.h"
using namespace std;

int main() {
    ListaContactos lista;
    Contacto* c1 = new Contacto("Santiago", "1234567890", "jose.vales@cimat.mx");
    Contacto* c2 = new Contacto("Juan", "0987654321", "hola.mundo@cimat.mx");
    Contacto* c3 = new Contacto("Joel", "1357924680", "adios.mundo@cimat.mx");
    Contacto* c4 = new Contacto("Claudia", "2468013579", "ejemplo@cimat.mx");

    lista.agregar_contacto(0, c1);
    lista.agregar_contacto(0, c2);
    lista.agregar_contacto(-1, c3);
    lista.eliminar_contacto(1);
    lista.mostrar_lista();
    std::cout << "\n";
    
    lista.agregar_contacto(-1, c4);
    lista.mostrar_lista(); // 1. Santiago, 2. Claudia, 3. Joel
    std::cout << "\n";

    lista.eliminar_contacto(2); // Debe mostrar un error
    lista.eliminar_contacto(-1); // Elimina a Santiago
    lista.mostrar_lista();
    std::cout << "\n";

    return 0;
}