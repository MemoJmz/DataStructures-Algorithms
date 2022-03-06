#include "ArbolBinarioBusqueda.hpp"

#include <iostream>

int main() {
    ArbolBinarioBusqueda arbol;

    arbol.insert(2);
    arbol.insert(4);
    arbol.insert(1);

    if (arbol.find(2))
        std::cout << "El 2 esta\n";
    else
        std::cout << "El 2 no esta\n";

    if (arbol.find(7))
        std::cout << "El 7 esta\n";
    else
        std::cout << "El 7 no esta\n";

    return 0;
}