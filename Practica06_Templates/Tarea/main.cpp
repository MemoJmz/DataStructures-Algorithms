#include <iostream>
#include <string>
#include "Estructuras.hpp"

using namespace std;

int main()
{
    Set s;
    
    s.add(5);
    s.add(4);
    s.add(3);
    s.add(5);
    s.add(4);
    s.add(2);
    s.add(10);
    s.add(20);
    s.add(15);
    s.add(1);
    
    
    s.remove(5);
    s.remove(24);
    s.remove(1);
    
    bool flag;
    string resp;
    int n = 5;
    
    flag = s.exists(n);
    resp = flag? "YES" : "NO";
    cout << "Does " << n <<  " exist in set? : " << resp << endl; 
    
    n = 4;
    flag = s.exists(n);
    resp = flag? "YES" : "NO";
    cout << "Does " << n <<  " exist in set? : " << resp << endl; 
    
    n = 1;
    flag = s.exists(n);
    resp = flag? "YES" : "NO";
    cout << "Does " << n <<  " exist in set? : " << resp << endl; 
    
    n = 10;
    flag = s.exists(n);
    resp = flag? "YES" : "NO";
    cout << "Does " << n <<  " exist in set? : " << resp << endl;
    
    return 0;
}
