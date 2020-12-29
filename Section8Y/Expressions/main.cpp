#include <iostream>
using namespace std;

int main() {
    cout << "My Template2" << endl;
    //Exspression
    //The most basic building blovk of a program
    //a sequence of operators and operands that speocifies a computation
    //Computes a value forma number of operands
    // 43 - literal
    //favourite_numer- variable
    //1.5 + 2.8 - addition
    //2*5 - multiolication
    // a> b - relational
    // a = b - assignement
    
    
    //statemment
    //complete line of code that performs some action
    //usually terminated with a semi-colon
    //ususlly contain expressions
    
//    const int num1 {10};
//    int num2 {20};
//    
//    num1 = 100;
//    
//    cout<< "num1 is "<< num1<< endl;
//    cout<< "num2 is "<< num2<< endl;
//    
//    
    int total {0};
    int num1{}, num2 {}, num3 {};
    const int count {3};
    cout << "enter 3 integers separated by spaces: ";
    cin>> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    double average {0.0};
    average = total / static_cast<double>(count);
    cout <<"the 3 number were :" << num1<<","<<num2<<","<<num3<<endl;
    cout << "the sum of the 3 numers is :"<< total<<endl;
    cout << "the average of the numbers is :"<< average<< endl;
    cout<< endl;
    
    
    
    
    return 0;
}