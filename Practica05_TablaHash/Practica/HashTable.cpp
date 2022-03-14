#include "HashTable.hpp"

#include <iostream>
#include <functional>       // usamos una función hash para strings

// public methods

HashTable::HashTable(unsigned int n){
    // definimos el tamaño de la lista
    N = n;
    // reservamos memoria para N listas de parejas
    key_values = new std::list<std::pair<std::string,int>>[N];
}

HashTable::~HashTable(){
    // liberamos el arreglo de listas
    delete[] key_values;
}

// método para insertar una pareja <string, int>
void HashTable::insert(std::string key, int value){
    // calculamos la celda a la que es hasheada la pareja
    unsigned int k = hash_func(key);

    // buscamos si la pareja ya esta en la lista k
    std::pair<std::string,int> *pareja = find(key);

    // si no tenemos tal pareja, la agregamos al final de la lista
    if(!pareja){
        std::pair<std::string,int> p(key, value);
        key_values[k].push_back(p);
        return;
    }
    // si la tenemos, aumentamos en 1 su contador
    pareja->second += 1;
}

// metodo para encontrar una pareja en la fila
std::pair<std::string, int>* HashTable::find(std::string key){
    // calculamos la celda k
    unsigned int k = hash_func(key);

    // declaramos un iterador
    std::list<std::pair<std::string, int>>::iterator it;

    // recorremos toda la lista
    for (it = key_values[k].begin(); it != key_values[k].end(); it++){
        // si coincide alguna clave (palabra) regresa esa posición
        if( (it->first).compare(key) == 0 )
            return &*it;
    }
    // si ninguna coincidio es porque no esta en el arreglo
    return NULL;
}

// private methods
unsigned int HashTable::hash_func(std::string key){
    // usamos una función hash con parametro string y
    // calculamos el modulo en función del tamaño de la tabla
    std::hash<std::string> string_hash;
    return string_hash(key) % N;
}
