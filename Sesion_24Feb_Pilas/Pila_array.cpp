#include <iostream>
#include <cstdlib>


class Pila{
    int *arreglo;
    int ultimo;     // Apuntador al último elemento insertado
    int capacidad;

public:
    Pila(int xCap);     // Constructor
    ~Pila();            // Destructor
    bool vacia();
    bool llena();
    void push(int x);
    int pop();
    void imprimir();
    int peek();
};

Pila::Pila(int xCap){
    capacidad = xCap;
    arreglo = new int[capacidad];
    ultimo = -1;
}

Pila::~Pila(){
    delete[] arreglo;   // Asi se elimina un apuntador
}

bool Pila::vacia(){
    return ultimo==-1;
}

bool Pila::llena(){
    return ultimo==capacidad-1;
}

void Pila::push(int x){
    if(llena()){
        std::cout << "[ERROR] Pila LLena\n";
        exit(EXIT_FAILURE);
    }
    ultimo++;
    arreglo[ultimo] = x;
    std::cout << "Se ha insertado el elemento " << x << "\n";
}

int Pila::pop(){
    if(vacia()){
        std::cout << "[ERROR] Pila Vacia\n";
        exit(EXIT_FAILURE);
    }
    int elemento = arreglo[ultimo];
    ultimo--;
    std::cout << "Se ha sacado el elemento " << elemento << "\n";
    /* En realidad no estamos "desocupando el espacio" */
    /* Solo "olvidamos" que tenemos algo almacenado ahi */
    return elemento;
}

void Pila::imprimir(){
    if(vacia()){
        std::cout << "[ERROR] Pila Vacia\n";
    }
    else{
        std::cout << "La pila tiene los siguiente elementos: \n";
        for(int i=0; i<=ultimo; i++){
            std::cout << arreglo[i] << " " ;
        }
        std::cout << "\n";
    }
}

int Pila::peek(){
    if(vacia()){
        std::cout << "[ERROR] Pila Vacia\n";
        exit(EXIT_FAILURE);
    }
    return arreglo[ultimo];
}


int main(){
    Pila P(3);
    P.push(1);
    P.push(2);
    P.push(3);

    P.imprimir();
    P.pop();        // No pasa nada si no recibo el valor

    P.push(4);

    return 0;
}