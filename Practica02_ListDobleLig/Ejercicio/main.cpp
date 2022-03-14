#include <iostream>
#include "Fila.hpp"

int main() {
    Fila boletosBadBunny;

    Persona* p1 = new Persona("Santiago", "" , 0);
    Persona* p2 = new Persona("Juan", "" , 0 );
    Persona* p3 = new Persona("Claudia", "" , 0);
    Persona* p4 = new Persona("Joel", "" , 0);
    Persona* p5 = new Persona("Pepito", "" , 0);

    boletosBadBunny.meter_atras(p1);
    boletosBadBunny.meter_atras(p2);
    boletosBadBunny.meter_atras(p3);
    // Muestra los elementos en orden ascendente
    boletosBadBunny.mostrar_lista();
    std::cout << std::endl;
    
    boletosBadBunny.poner_enfrente(p2, p4);
    boletosBadBunny.poner_enfrente(p4, p5);
    boletosBadBunny.mostrar_lista();
    std::cout << "\n";

    boletosBadBunny.remover_enfrente(p3);
    boletosBadBunny.atender();
    boletosBadBunny.mostrar_lista();
    std::cout << "\n";

    boletosBadBunny.remover_atras();
    boletosBadBunny.mostrar_lista();
    return 0;
}