#include <iostream>
#include <iomanip>      // Header proving parametric manipulators
#include <fstream>      // Input/output stream class to operate on files
#include <string>
#include <list>

//#include "HashTable.hpp"

using namespace std;

// ************************************************************************ DRIVER ************************************************************************

void ejemploLista(){
    list<string> l;
    l.push_back("cadena en medio");
    l.push_front("primer cadena");
    l.push_back("ultima cadena");
    
    for (auto it = l.begin(); it!= l.end(); it++){
        cout << "\tcontenido: " << *it << endl;    
    }
}

void ejemploPair(){
    pair<string, int> p1("juan", 24);
    pair<string, int> p2;
    p2.first = "andrea";
    p2.second = 27;
    
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
}


int main(){
    ejemploLista();
    //ejemploPair();
    
    return 0;
}






