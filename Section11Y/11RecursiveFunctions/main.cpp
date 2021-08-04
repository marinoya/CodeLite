#include <iostream>
using namespace std;

unsigned long long factorial (unsigned long long n)
{
	if (n==0)
	{
		return 1;
	}
	return n*factorial(n-1);
}

unsigned long long fibonacci(unsigned long long n)
{
	if (n<=1){
		return n;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}

int main (){
	cout << factorial(8) << endl;
	cout << fibonacci(30) << endl;
	cout << fibonacci(50)<< endl;
	return 0;
	}