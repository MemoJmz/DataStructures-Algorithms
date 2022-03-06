#include <iostream>
#include "ArbolBinario.hpp"

int main(){
    int N = 5;
    int recorridoInorder[] = {3, 1, 7, 2, 8};
    int recorridoPosorder[] = {3, 7, 8, 2, 1};

    /* Deficióne e inicialización un arbol binario */
    ArbolBinario arbol(recorridoInorder, recorridoPosorder, N);
    /* Generamos el arreglo en Pre-Order */
    int* recorridoPreorder = arbol.recorrido_preorder();
    
    /* Mostramos en pantalla el arreglo */
    std::cout << "Recorrido en preorder del arbol:\n";
    for(int i=0; i<N; i++)
        std::cout << recorridoPreorder[i] << " ";

    /* Liberamos memoria del arreglo */
    delete[] recorridoPreorder;

    return 0;
}