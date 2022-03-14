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