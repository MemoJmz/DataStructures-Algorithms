#include <iostream>
#include <string>
using namespace std;

class Publicacion{
    private:
    char status = '-';  //p:publicado n:no publicado
    unsigned int N;
    char *codes;
    unsigned int pos_av = 0;

    public:
    string titulo;
    Publicacion(string titulo, char status, unsigned int max);   // constructor debe tener como nombre siempre el nombre de la clase (case sensitive)
    ~Publicacion();                                              // el simbolo raro ~ indica que es el destructor
    void set_status(char status);
    char get_status();
    void add_code(char c);
};



class Revista{
    private:
    unsigned int N;
    unsigned int pos_av = 0;
    Publicacion ** lista_pubs;

    public:
    Revista(unsigned int max);
    ~Revista();
    void add_pub(Publicacion* p);
    Publicacion* find(string titulo); //"titulo1"
};
