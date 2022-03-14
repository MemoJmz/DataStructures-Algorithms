#pragma once

#include <string>
#include <list>
#include <utility>

class HashTable{
    public:
        HashTable(unsigned int n);                              // constructor
        ~HashTable();                                           // destructor
        void insert(std::string key, int value);                // intertar o actualizar
        std::pair<std::string, int>* find(std::string key);     // encontrar la pareja key-value

    private:
        unsigned int N;                                         // tamaño de la tabla hash
        unsigned int hash_func(std::string key);                // función de hash
        std::list<std::pair<std::string, int>>* key_values;     // arreglo de key-value
};