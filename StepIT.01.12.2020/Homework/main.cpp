#include <iostream>
using namespace std;

int main() {
    
//    Направете програма, която да изобразява на екрана хоризонтална линия от символи. 
//    Броят на символите, какъв символ да се използва и каква да бъде линията 
//    – вертикална или хоризонтална – избира потребителят. 

    
    int num {0};
    char symbol {'&'};
    bool orientation {0};
    
    cout << "please choose a number of characters for the line"<< endl;
    cin>>num;
    cout<< "please choose a character for the line"<<endl;
    cin >>symbol;
    cout << "please choose 0 for horizontal line and 1 for vertical" << endl;
    cin>>orientation;
    
    if(!(orientation)){
        cout<<endl;
        while (num >=0){
                cout<<symbol;
                num--;}
        cout<<endl;
        }else{
            cout<<endl;
            while (num >=0){
                cout<<symbol<< endl;
                num--;}
            cout<<endl;
        }
//    1. Напишете програма, която да намира сумата на всички цели нечетни числа 
//    в диапазон посочен от потребителя. 
    cout<< "please enter two numbers"<<endl;
    int a,b,c ;
    cin>>a;
    cin>>b;
    if(a>b){
        int c =a;
        a=b;
        b=c;}
    if(a%2==0){
        a++;
        }
    while(a<=b){
        c+=a;
        a+=2;
        }
    cout << "the total of all whole odd numbers is "<< c<<endl;;
    
//    2. Дадено е натурално число n. Напишете програма, която да изчислява факториела 
//    на неотрицателните цели числа n (тоест цяло число по-голямо от 0). 
//    Формулата за изчисление на факториел е посочена по-долу. 
    unsigned short n {0};
    cout << "\nplease enter a positive whole number"<< endl;
    cin >> n;
    unsigned long long res {1};
    int counter {1};
    while(counter <=n){
        res *=counter;
        counter++;}
    cout<<res<<endl;
    return 0;
}