Connectivity Problems

Suponemos que tenemos objetos etiquetamos, queremos diseñar un algoritmo en el cual conectaremos dos objetos y,
en caso de que se encuentren conectados, indicarlo.

El algoritmo funcionara como sigue:
Entrada: Secuencia de N pares enteros, cada entero representa un objeto

Notas:
- Suponemos que la conectividad es una relacion ~ transitiva a~b, b~c -> a~c
- Filtrará las parejas redundates

Comentarios:  
- Se necesitarán al menos N-1 parejas para tener a todo el conjunto conectado
- El conjunto de parejas de entrada se llama grafo
- El conjunto de pares de salida es el árbol generador para este grafo

Abstraemos operaciones:
FIND -> Encontrar el conjunto al que pertenece un elemento dado.
UNION -> Reemplazar a los conjuntos que contienen los elementos nuevos por su union

¿Qué se busca en un algoritmo?
Eficiente -> Realice relativmente pocas operaciones elementales





Comandos para correr en consola:

Compilar/ General el ejecutalbe: g++ NAME_FILE.cpp -o name_file

g++ -std=c++11 NAME_FILE.cpp -o name_file.o

Lo cual significa:
g++ el nombre del compilador, enlaza programas en C++
-std=c++11 es la versión de la biblioteca estándar
name_file.cpp es el nombre del archivo c++ que creamos


Correr: name_file (.exe)



// Quick Find Algorithm
// C++ Language

#include <iostream> // Flujo de datos de entrada y salida

//No nos preocuparemos (por ahora) de memoria dinámica
static conts int N = 10000;

int main(){
    int i, p, q, id[N];
    // Inicializamos el arreglo
    for(i=0; i<N; i++ ) id[i] = N;
    // Forma de utilizar funciones de la libreria estandar "std::function"
    while( std::cin >> p >> q)
    {
        int t = id[p];
        if( t == id[q] ) continue;      // Si ya estan conectadas no hagas nada
        for( i=0; i<N; i++ )
            if( id[i] == t)
                id[i] == id[q];         // Si no, etiqueta a todos los elementos del arreglo con la etiqueta de q
        std::cout << '<' << p << ' ,' << q << '>' << std::endl;
    }

}
