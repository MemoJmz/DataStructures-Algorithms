#include <iostream>
#include "RevPub.h"
using namespace std;


void print_info(string titulo, Revista& revista){
    Publicacion *pf = revista.find(titulo);
    if (pf != NULL){
        cout << pf->titulo << " status : " << pf->get_status() << endl;
    }else{
        cout << "[MSG]: publication not found: " << titulo << endl;
    }
}

// programa driver
int main()
{
    Revista revista(10);                                            // vive en el stack
    Publicacion* p1 = new Publicacion("publicacion 1", 'p', 4);     // vive en el heap
    Publicacion* p2 = new Publicacion("publicacion 2", 'n', 3);
    Publicacion* p4 = new Publicacion("publicacion 4", 'w', 3);

    // add codes
    p1->add_code('a');
    p1->add_code('b');
    p1->add_code('c');
    p1->add_code('d');
    p1->add_code('e');

    revista.add_pub(p1);
    revista.add_pub(p2);

    print_info("publicacion 1", revista);
    print_info("publicacion 3", revista);

    //delete(p1);
    //delete(p2);               no es necesario, porque al terminar de ejecutar main, se llama al destructor de revista, porque vive el stack
    delete(p4);
    return 0;
}


/*
el stack almacena variables de las cuales conoce su tamaño, y son declaradas en un metodo
el heap se almacena la memoria dinamica. esta se reserva con la palabra new
*/
