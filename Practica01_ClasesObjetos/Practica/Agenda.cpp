#include "Agenda.h"

/*----------- Definición de los métodos de la Clase Contacto----------------*/
// Constructor de contacto
Contacto::Contacto(string nombre, string numero, string email){
    this->nombre = nombre;
    this->numero = numero;
    this->email = email;
}


/*------------------------------Definicion de los métodos de la Clase AgendaTel-------------*/

// Constructor de Agenda
AgendaTel::AgendaTel(unsigned int max){
    this->N = max;
    this->lista_contactos = new Contacto*[max];
}

AgendaTel::~AgendaTel(){
    for(unsigned int i=0; i<pos_avalable; i++){
        delete(lista_contactos[i]);
    }
    delete(lista_contactos);
}

void AgendaTel::insertar(Contacto* c){
    if(pos_avalable<N){
        lista_contactos[pos_avalable] = c;
        pos_avalable ++;
        cout << "Contacto insertado con e\'xito." << endl;
        return;
    }
    cout << "[Err]: No hay espacio disponible." << endl;
    return;
}

Contacto* AgendaTel::find(string nombre){
    for(unsigned int i = 0; i<pos_avalable; i++){
        if(lista_contactos[i]->nombre.compare(nombre) == 0){
            return lista_contactos[i];
        }
    }
    cout << "[MSG] Contacto no encontrado" << endl;
    return NULL;
}

void AgendaTel::print_contacts(){
    cout << "Lista de contactos: " << endl;
    for(unsigned int i = 0; i < pos_avalable; i++){
        cout << "Contact " << i << ": " << lista_contactos[i]->nombre << endl;
        cout << "Number: " << lista_contactos[i]->numero << "\t email: " << lista_contactos[i]->email << endl;
    }
}