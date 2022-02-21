#include <iostream>
#include "ListaContactos.h"
using namespace std;

int main() {
    AgendaTel lista(50);
    Contacto* c1 = new Contacto("Santiago", "1234567890", "jose.vales@cimat.mx");
    Contacto* c2 = new Contacto("Juan", "0987654321", "hola.mundo@cimat.mx");
    Contacto* c3 = new Contacto("Joel", "1357924680", "adios.mundo@cimat.mx");
    Contacto* c4 = new Contacto("Claudia", "2468013579", "ejemplo@cimat.mx");

    lista.agregar_contacto(0, c1);
    lista.agregar_contacto(0, c2);
    lista.agregar_contacto(-1, c3);
    lista.eliminar_contacto(1);
    lista.mostrar_lista();
    lista.agregar_contacto(-1, c4);
    lista.mostrar_lista(); // 1. Santiago, 2. Claudia, 3. Joel
    lista.eliminar_contacto(2); // Debe mostrar un error
    lista.eliminar_contacto(-1); // Elimina a Santiago

    return 0;
}



/*
#include <iostream>
#include "Agenda.h"
using namespace std;

int main(){
    AgendaTel agenda(50);
    Contacto* c1 = new Contacto("Mkk Mkkdd Sse", "413 567 8920", "mkk.mkkdd@gmail.com");
    Contacto* c2 = new Contacto("Lle Ajsss Awj", "413 264 1365", "lle.ajsss@gmail.com");
    Contacto* c3 = new Contacto("Ldl Sjdfa Ssd", "413 547 4927", "ldl.sjdfa@gmail.com");
    Contacto* c4 = new Contacto("Tuy Hjass Lls", "413 864 5627", "tuy.hjass@gmail.com");

    agenda.insertar(c1);
    agenda.insertar(c2);
    agenda.insertar(c3);
    agenda.insertar(c4);

    agenda.find("Jsj gege");

    agenda.print_contacts();

    return 0;
}
*/