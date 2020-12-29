#include <iostream>
using namespace std;
int main() {
    int a=9, b =2;
    cout << a/b << "delene bez ostatak : 4" << endl; //delene bez ostatak : 4
    cout << a%b << "namirane na ostataka ot deleneto : 1" << endl; //namirane na ostataka ot deleneto : 1
    
    //increment
    cout << "increment"<< endl;
    int c =9;
    cout << c << endl;
    c++; //10
    cout << c << endl;
    
    //decrement
    cout << "decrement"<< endl; 
    int d =9;
    cout << d << endl;
    d--; //8
    cout << d << endl;
    
    //prefix & postfix increment
    cout << "prefix & postfix increment" << endl; 
    
    int f = 99;
    cout << f++ << endl;
    cout << f << endl;
    
    int e = 99;
    cout << ++e << endl;
    cout << e << endl;
    
    
    int g = 9, res;
    out << "prefix increment" << endl; 
    res = g++;
    
    
    return 0;
}