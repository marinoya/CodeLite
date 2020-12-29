#include <iostream>
using namespace std;
int main() {

    /*
    Да проверим дали число вкарано от клавиатурата е отрицателно
    Да проверим дали число вкарано от клавиатурата е четно
    Да проверим дали число вкарано от клавиатурата се дели на 5
    Да проверим дали сбора на три числа вкарани от клавиатурата е по голям от тяхото произведение
     * */
     int a;
     cout << "Please enter a positive number" << endl;
     cin >> a;
     if(a>=0){
         cout<< "Thanks, the numer is positive"<< endl;}else{
             cout <<"That is not a positive number"<< endl;}
     int b;
     cout << "Please enter an even number" << endl;
     cin >> b;
     if(b%2==0){
         cout<< "Thanks, the numer is even"<< endl;}else{
             cout <<"That is not an even number"<< endl;}

     int c;
     cout << "Please enter a number divisible by 5" << endl;
     cin >> c;
     if(c%5==0){
         cout<< "Thanks, the numer is divisible by 5"<< endl;}else{
             cout <<"That is not a number divisible by 5 "<< endl;}
             
     int d, e, f;
          cout << "Please enter 3 numers and press enter after each: " << endl;
     cin >> d;
     cin >> e;
     cin >> f;
     int g = (d+e)+f;
     int h = (d*e)*f;
     if (g>h){
         cout << "the thing Ivo asked for is true"<< endl;
         }else{
             cout<<"The thing Ivo asked for is not true"<< endl;}

    return 0;
}