#include <iostream>
#include <cstdlib>

// Define la capacidad por default de la cola
#define SIZE 10

// A class to represent a stack
class Cola{
    int *arr;   // Elementos que se insertarán en la cola
    int ultimo;
    int capacity;

public:
    Cola(int xSize);        // Constructor
    ~Cola();                // Destructor

    void encolar(int x);
    bool esVacia();
    int desencolar();
    void recorrer();
    void imprimir();
};

// Concstructor para inicializar stack
Cola::Cola(int xSize){
    arr = new int[xSize];
    capacity = xSize;
    ultimo = -1;    // Equiv a nulo
}

// Destructor para liberar la memoria reservada para la stack
Cola::~Cola(){
    delete[] arr;
}

/*
á por \240
é por \202
í por \241
ó por \242
ú por \243
*/

// Función para agregar un elemento a la cola
void Cola::encolar(int x){
    if(ultimo < (capacity-1)){
        ultimo++;   // Indice de la posición
        arr[ultimo] = x;
        std::cout << "Se insert\242 " << arr[ultimo] << "\n";
        return;
    }
    std::cout << "La cola esta llena\n";
    return;
}

bool Cola::esVacia(){
    return ultimo==-1;
}

int Cola::desencolar(){
    int x;
    if(esVacia()){
        std::cout << "La cola esta vacia\n";
        exit(EXIT_FAILURE);     // Te sales intenpestivamente del programa
    }
    x = arr[0];
    std::cout << "Se removi\242: " << x << "\n";
    recorrer();
    ultimo--;
    return x;
}

void Cola::recorrer(){
    for(int i=0; i<ultimo; i++){
        arr[i] = arr[i+1];
    }
}

void Cola::imprimir(){
    if(esVacia()){
        std::cout << "La cola esta vacia\n";
        return;
    }
    for(int i=0; i<=ultimo; i++){
        std::cout << arr[i] << " <- ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    return;
}

int main()
{
    Cola Q(SIZE);
    Q.encolar(1);
    Q.encolar(2);
    Q.imprimir();

    Q.desencolar();
    Q.imprimir();

    Q.encolar(3);
    Q.encolar(4);
    Q.imprimir();

    return 0;
}