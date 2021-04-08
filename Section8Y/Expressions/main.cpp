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
//    int total {0};
//    int num1{}, num2 {}, num3 {};
//    const int count {3};
//    cout << "enter 3 integers separated by spaces: ";
//    cin>> num1 >> num2 >> num3;
//    
//    total = num1 + num2 + num3;
//    double average {0.0};
//    average = total / static_cast<double>(count);
//    cout <<"the 3 number were :" << num1<<","<<num2<<","<<num3<<endl;
//    cout << "the sum of the 3 numers is :"<< total<<endl;
//    cout << "the average of the numbers is :"<< average<< endl;
//    cout<< endl;

bool equal_result {false};
bool not_equal_result {false};
int num1{}, num2{};

cout << boolalpha;

cout<< "Enter two integeres separated by a space: ";
cin>> num1 >> num2;\
equal_result = (num1 == num2);
not_equal_result = (num1 != num2);
cout << "Comparieon result (equals) : " << equal_result <<endl;
cout << "Comparison result (not eequals) " <<not_equal_result << endl;

char char1{}, char2{};
cout<<
    
    
    
    return 0;
}


//
//
//int x = 10, y = 3, z = 6;
//cout << (x == y) << " "; 			0
//cout << (z <= x) << " "; 			1
//cout << (y != z) << " "; 			1
//cout << (x > y && z < x) << " ";	1
//cout << (y < x && z < x) << " ";	1
//cout << (x < y || z < 0) << endl;	0
//
//
//int x= 5;
//int y= -2;
//int z = 2;
//cout << (x + (y * z) <= x + (z * z) - x) << endl;
//1 <= 4
//
//What are the values of x and y after the following code executes?
//
//double  a = 100;
//int b = 12;
//int x = b % 3; 0
//double  y = a / b;  8.333333333333333
//int z = a / b; 8

