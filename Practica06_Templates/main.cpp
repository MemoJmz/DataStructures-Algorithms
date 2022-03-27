// Práctica de Templates

#include <stdio.h>
#include <iostream>
#include <string>
#include "Estructuras.hpp"

using namespace std;

int main(){
    // structures init
    FakeStructure<int> f(5);
    FakeStructure<int> f2(3);
    FakeStructure<int> f3(4);
    FakeStructure<int> f4(6);
    FakeStructure<string> fs("Hola");

    // test print data
    cout << "test data types" << endl;
    cout << f.getter() << " " << fs.getter() << endl;

    // test operator <
    string flag = f<f3 ? "True" : "False";
    cout << "f<f3 ? " << flag << endl;

    // test operator >
    flag = f>f2 ? "True" : "False";
    cout << "f>f2 ? " << flag << endl;

    // test operator ==
    flag = f3==f3 ? "True" : "False";
    cout << "f3==f3 ? " << flag << endl;

    // test operator !=
    flag = f!=f3 ? "True" : "False";
    cout << "f!=f3 ? " << flag << endl;

    // test operator +
    cout << "f + f3 = " << (f + f3).getter() << endl;


    // ********************** Ejercicio**************************
    // flag = f3==f3? "True" : "False";
    // cout << "f3==f3 ? " << endl;
    // cout << flag << endl;

    return 0;
}