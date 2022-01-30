// Quick Find Algorithm
// Sedgewick, Robert. Algorithms in C++, Parts 1-4 (p. 12). Pearson Education

#include <iostream> // Flujo de datos de entrada y salida

// Podemos escribir using namespace std; para evitar escribir std::

//No nos preocuparemos (por ahora) de memoria dinámica
static const int N = 10;

int main()
{
    int i, p, q, id[N];
    // Inicializamos el arreglo
    for( i=0; i<N; i++ ) id[i] = i;

    // Imprimir el contenido del arreglo al inicio
    for( i=0; i<N; i++ ){
        std::cout << id[i] << " ";
    } std::cout << std::endl;

    // Forma de utilizar funciones de la libreria estandar "std::function"
    while( std::cin >> p >> q)
    {
        int t = id[p];
        if( t == id[q] ) continue;      // Si ya estan conectadas no hagas nada
        for( i=0; i<N; i++ )
            if( id[i] == t) id[i] = id[q];         // Si no, etiqueta a todos los elementos del arreglo con la etiqueta de q

        // Imprimir el contenido del arreglo al final de la iteracion actual
        for( i=0; i<N; i++ ){
            std::cout << id[i] << " ";
        } std::cout << std::endl;

        std::cout << "Pair " << "<" << p << "," << q << "> gives a new connetion " << std::endl;
    }
    return 0;
}
