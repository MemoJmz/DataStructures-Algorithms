#include "RevPub.h"                         // Siempre incluir header

// ****************************************************************************** Class Publicacion ******************************************************************************

// constructor
Publicacion::Publicacion(string titulo, char status, unsigned int max){             // Publicacion:: indican la clase
    this->titulo = titulo;                                                          // this-> indica que hablamos del atributo titulo de la clase Publicacion
    this->codes = new char[max];                                                    // reserva de memoria dinamica, new es palabra reservada
    N = max;

    //set status
    set_status(status);
}

// setter
void Publicacion::set_status(char status){
    if (status == 'p' || status == 'n'){
        this->status = status;
    }else{
        cout << "[MSG]: status has to be <p> or <n>" << endl;
    }
}

// getter
char Publicacion::get_status(){
    return status;
}

// add code function
void Publicacion::add_code(char c){
    if (pos_av < N){
        codes[pos_av] = c;
        pos_av++;
    }else{
        cout << "[MSG]: no space available to add code" << endl;
    }
}

// destructor
Publicacion::~Publicacion(){
    delete(codes);
}

// ****************************************************************************** Class Revista ******************************************************************************

// constructor Revista
Revista::Revista(unsigned int max){
    N = max;
    lista_pubs = new Publicacion*[max];                 // reserva memoria dinamica
}

//destructor Revista
Revista::~Revista(){
    for (unsigned int i=0; i<pos_av; i++){
        delete(lista_pubs[i]);
    }
    delete(lista_pubs);                                 // libera memoria dinamica de lista_pubs
}

void Revista::add_pub(Publicacion* p){
    if (pos_av < N){
        lista_pubs[pos_av] = p;
        pos_av++;
    }
}

Publicacion* Revista::find(string titulo){
    for (unsigned int i = 0; i<pos_av; i++){
        if (lista_pubs[i]->titulo.compare(titulo) == 0){
            return lista_pubs[i];
        }
    }
    return NULL;
}
