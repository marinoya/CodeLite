#include <iostream>
using namespace std;

int main() {
    cout << "My Homework for intro to programming with c++ 24.Nov.2020" << endl;
    //inicializirame 4isloto
    int num {0};
    //iskame 4islo ot potrebitelya
    cout << "\nplease enter a 3 digit number" << endl;
    cin >> num;
    //proveryavame dali e tricifreno, ako ne e vru6tame saob6tenie
    if (num<=999 && num >=100)
        {cout<<"numer is correct size"<<endl;
        //izvejdame trite mu cifri
        int a, b, c;
        a = num%10;
        cout << "last digit is " << a << endl;
        num = num/10;
        b = num%10;
        cout << "second digit is " << b << endl;
        num = num/10;
        c = num%10;
        cout << "first digit is " << c << endl;
        num = num/10;
        //sabirame cifrite
        int result = a+b+c;
        //pokazvame gi na potrebitelya
        cout << "the result for the homework is "<< result << endl;
        }
        else
        {cout<<"number is incorrect size"<<endl;}


    return 0;
}