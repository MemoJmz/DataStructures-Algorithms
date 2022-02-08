#include <iostream>

// Espacio de nombres
// Clase estandar, en ella esta cout, cin
using namespace std;

/* Creación de la clase */
class Rectangle{
        // Atributos
        float LadoA;    // Al estar en esta ubicaión se manejan como una variable privada
	    float LadoB;    // No se pueden modificar
    public:
        // Métodos
	    Rectangle(float LA, float LB){ // Constructor, no es necesario definirlo pero es parte de una buena practica
	   	 LadoA=LA;
	   	 LadoB=LB;
        }
        // Destructor, no es necesaro este método
        ~Rectangle(){
            //cout<<"Aqui termina la ejecuccion\n";
        }
        // getters, metodos que me permiten acceder a mis atributos
        float getLadoA(){
			return LadoA;
		}
		float getLadoB(){
			return LadoB;
		}
        // setters, voy a ser capaz de modificar un valor atravéz de los métodos
        void setLadoA(float newLadoA){
            LadoA = newLadoA;
        }
        void setLadoB(float newLadoB){
            LadoB = newLadoB;
        }
        // Creamos un método para calcular el area
        //float calculaArea(){
        //    return LadoA*LadoB;
        //}
        float calculaArea();
};

// Podemos implementar el método calcula Area con un prototipo
float Rectangle::calculaArea(){
    return LadoA*LadoB;
}
//
// E incluir dentro de la clase float calculaArea();


// Programa principal
int main(){
    // Creación de objetos
	Rectangle R=Rectangle(10,15);
	Rectangle R2=Rectangle(1.5,2.5);;

	cout<<"Lado A del primer rectangulo:"<<R.getLadoA()<<" LadoB:"<<R.getLadoB()<<"\n";
	cout<<"Lado A del segundo rectangulo:"<<R2.getLadoA()<<" LadoB:"<<R2.getLadoB()<<"\n";
    cout<<"Area del rectangulo A: "<<R.calculaArea()<<"\n";
}
