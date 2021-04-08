#include <iostream>
using namespace std;


void printArr(int *arr, int arrSize)
{
	for( int i=0; i<arrSize; i++, arr++)
	{
		cout << *arr<<'/t';
	}
	cout <<endl;
}


int sumOfArray(int *arr, int arrSize)
{
	int sum = 0;
	for (int i = 0; i<arrSize; i++)
		{
			sum+=*arr++;
		}
}

int main (){
	cout << "Hello world" << endl;
//	
//	int a = 8;
//	cout << a << endl;
//	int *p = new int;
//	*p = 18;
//	cout << *p << endl;
//	cout << p<<endl;
//	cout << &p<<endl;
//	delete p;
//	cout << p<< endl;
//	
//	cout << &a<< endl;
//	
	
//	int a = 8, b = 13;
//	cout << &a<<endl;
//	cout << &b<<endl;
//	int *p;
//	
//	p= &b;
//	cout <<*p<< endl;
//	p++;
//	cout <<*p<<endl; 

int a[] = {1,4,3,2};
int *p;
p = &a[0];
p = a;

cout << a << endl;
cout << &a[0] << endl;
cout << p << '\t' << *p << endl;
p++;
cout << p << '\t' << *p << endl;
p++;
cout << p << '\t' << *p << endl;


printArr(a,4);

	
	return 0;
	}