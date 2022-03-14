#include <string>

class Persona {
    public:
        std::string nombre;
        std::string apellido;
        int edad;

        Persona* siguiente;

        Persona(std::string nombre, std::string apellido, int edad);
        ~Persona();
};

class Fila {
    public:
        Fila();
        ~Fila();

        void remover_enfrente(Persona* caller);
        void poner_enfrente(Persona* caller, Persona* persona);
        
        void atender();
        void mostrar_lista();
        void meter_atras(Persona* persona);
        void remover_atras();

        Persona* head;
};