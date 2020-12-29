#include <iostream>
using namespace std;

int main() {
//    int a,b;
//    cout << "please enter two integers" << endl;
//    cin >> a;
//    cin >> b;
//    if (a>b){
//        int c = a;
//        a = b;
//        b = c;}
//    while(a <= b){
//        cout<< a <<" ";
//        a++;}


//int start, end;
//cin>>start;
//cin>>end;
//if (start % 5 != 0){
//    start++;}
//while (start<end){
//    cout<< start<< endl;
//    start +=5;}


//int start, end;
//cin>>start;
//cin>>end;
//
//while (start<end){
//    if(start %5 ==0){
//        cout<< start<< endl;}
//    start++ ;}

int start, end;
cin>>start;
cin>>end;
start += 5 - (start%5);

while (start<end){
        cout<< start<< endl;
   start+=5 ;
   }

        
    return 0;
}