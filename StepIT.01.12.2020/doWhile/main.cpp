#include <iostream>
using namespace std;

int main() {
//    //***********while
//    int i=6;
//    while (i>10){
//        cout<< "we are in while"<< endl;
//        }
//        
//    //************do-while
//    int x =6;
//    do{
//        cout << "We are in do-while" << endl;
//        }while(x>10);
    
    
    int num {0};
    int mult {1};
    cout << "please enter a number between 1 and 10"<< endl;
    cin>>num;
    while (mult<=10){
        cout<< mult << " * " << num << " = " << num*mult << endl;
        mult++;
        }
        
        
    
    
    return 0;
}