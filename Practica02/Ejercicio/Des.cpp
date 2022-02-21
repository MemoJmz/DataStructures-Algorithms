#include <iostream>

class A {
    public:
        int numero;
        A* siguiente = NULL;

        A(int numero): numero(numero) {
            std::cout << "Se esta construyendo una clase A con valor: " << numero << "\n";
        }
        ~A() {
            if (siguiente)
                delete siguiente;
            siguiente = NULL;

            std::cout << "Se esta destruyendo una clase A con valor: " << numero << "\n";
        };
};

int main() {
    A* cuatro = new A(4);
    A* cinco = new A(5);
    A* tres = new A(3);
    
    cuatro -> siguiente = cinco;
    tres -> siguiente = cuatro;
    //delete cuatro;
    delete tres;

    return 0;
}