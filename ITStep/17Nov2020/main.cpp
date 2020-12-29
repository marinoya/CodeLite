#include <iostream>
using namespace std;
int main() {
    //logical variables - bool
    bool var;
    
    var = 0;
    
    bool var1 = 1;   
    //целочислени стойности
    short var2; //2B - dva baita
    //long
    int var3; //4B - 4 baita
    /*short 
     * 2B = 16bit
     * 2^16 = 65536
     * no poneje ima i 0~65535 - this is unsigned short
     * za da ima i otricatelna 4ast: -32767 ~ 32767 = -2^15 ~ 2^15
     * */
    unsigned short var4 = -4437;
    //cout << var4 << endl ;
    
    double var5 = -5.76;
    float var6 = -34.4;
    
    char a = '7';
    int b = 7;
    
    //CONBSTANTI
    
    //const int aa = 3;
    //cout << aa << endl;
    //aa = 4343; error assignment of read-only variable 'aa'
    //cout << aa << endl;
    
    
    //int ab =3, cd =5; //inicialize multiple variables
    //cin>>ab>>cd;
    //cout <<ab <<cd;
    
    //напишете програма която показва средно аритметичното от 2 числавкарани от потребителя
    /*int h1;
    int h2;
    
    cout<<"Please enter fist digit: ";
    cin >> h1 ;
    cout<<"Please enter second digit: "; 
    cin >> h2 ;
    double h3 = (h1+h1)/2;
    cout<< h3;*/
    
    int h1, h2;
    cout << "Enter a="; cin >> h1;
    cout << "enter b="; cin >> h2;
    cout << "Result =" << (h1+h2)/2 <<endl;
    
    return 0;
}