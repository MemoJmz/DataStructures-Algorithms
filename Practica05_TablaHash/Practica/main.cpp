#include <iostream>
#include <iomanip>      // Header proving parametric manipulators (No se para que se utiliza)
#include <fstream>      // Input/output stream class to operate on files
#include <string>
#include <utility>      // Include the class pair

#include "HashTable.hpp"

using namespace std;

// ************************************************************************ UTILITIES *********************************************************************

// read word by word from a file
string read_word(ifstream &file_reader){
    string word;

    // if end of file reached, return empty string
    if (file_reader.eof())
        return "";

    // return word
    file_reader >> word;
    return word;
}

void query_word(string word, HashTable &table){
    pair<string, int>* p = table.find(word);
    if (p)
        cout << word << "\tcount: " << p->second << endl;
    else
        cout << word << " is not in vocabulary " << endl;
}

// ************************************************************************ VOCABULARY *********************************************************************

void update(string word, HashTable &table){
    // codigo para ir agregando palabras al vocabulario, que es la tabla hash.
    table.insert(word, 1);
}

// ************************************************************************ DRIVER ************************************************************************

int main()
{
    // open input file stream
    string filename = "words.txt";
    ifstream readf(filename);

    // declare hash HashTable or a reasonable size
    HashTable table(10000);

    // read first word
    string word = read_word(readf);

    while(!word.empty()){
      update(word, table);
      // read next word
      word = read_word(readf);
    }

    // close input stream
    readf.close();

    //querys
    query_word("méxico", table);
    query_word("corrupción", table);
    query_word("hola", table);
    query_word("perplejidad", table);
    query_word("monólogo", table);
    query_word("mundo", table);
    query_word("huachicoleo", table);
    query_word("arte", table);
    query_word("revista", table);
    query_word("pobreza", table);
    query_word("odebrecht", table);
    query_word("...", table);
    
    return 0;
}
