#include <iostream>
using namespace std;


//	Задаза1
//Да се напише функция която при подаде аргумент положително дробно число закряъгля 
//това зисло до втората цидра след десетичната запетая и го връща като резлутат на функцията. 
//Пример 126.2345 -> 126.23
//Пример 126.2375 -> 126.24
//Пример 3.21212121 -> 3.21
//Пример 117.117 -> 117.12


double shorten (double a)
{
	int whole = a;
	cout<< "whole is " << whole << endl;
	cin.get();
	a = a - whole;
	cout << "a = " << a<< endl; 
	cin.get();
	a *= 100;
	cout << "a = " << a << endl;
	cin.get();
	int b = a;
	cout  <<" int b = "<<b<<endl;
	cin.get();
	a = (double)b/100;
	cout << "a = " << a << endl;
	cin.get();
	cout << " a + whole = "<< a << " + "<< whole<< " = " << a+whole << endl;
	cin.get();
	return a+ whole;
}
	
//second and quicker way
	double shorten2(double a)
	{
		a *= 100;
		cout << "a = "<<a<<endl;
		cin.get();
		int b = a + 0.5;
		cout << "b = "<<b<<endl;
		cin.get();
		a = (double)b/100;
		cout << "a = "<<a<<endl;
		cin.get();
		
		return a;
	}

//Задача2
//Функция приема цяло положително число като аргумент, не по голямо от 9999. 
//Функцията намира и връща произведението на всички цифри различни от 0 на подадения аргумент.

int multiplyer(int a)
{
	if (a<0 || a> 9999)
	{
		return -1;
	}
	int res{1};
	while(a>0)
	{
//		cout << "a % 10 = " <<a%10 << endl;
		if(a%10!=0)
		{
			res *= a%10;
		}
		a/=10;
//		cout<< "a = "<<a<<" res = " << res << endl;
//		cin.get();
	}
		return res;
}



int main ()
{
//	cout << shorten(123.456789)<< endl;
	cout << shorten2(123.456789)<< endl;
	cout << multiplyer (3008)<< endl;

	return 0;
}