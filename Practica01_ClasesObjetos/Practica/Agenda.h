#include <iostream>
#include <string>
using namespace std;

class Contacto{
    public:
    string nombre;
    string numero;
    string email;

    Contacto(string nombre, string numero, string email);
};

class AgendaTel{
    private:
    Contacto **lista_contactos;
    unsigned int N;
    unsigned int pos_avalable = 0; 

    public:
    AgendaTel(unsigned int max);
    ~AgendaTel();
    void insertar(Contacto *c);
    Contacto* find(string nombre);
    void print_contacts();
};