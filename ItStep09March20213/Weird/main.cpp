#include <iostream>
using namespace std;

int& f(int a[], int arrSize)
{
	int a1 {12};
	cout << a1 << endl;
	int *p = &a1;
	for(int i=0; i<arrSize; i++)
	{
		if(a[i]<0)
		{
			return a[i];
		}
	}
	return *p;
	
}

int main()
{
	int x[] = {1,2,3,4};
	cout << x[1] << endl;
	cout << f(x, 4) << endl; // x[1] = 1000
	int h = 7;
	cout << h << endl;
	f(x, 4) = 1000;
	//cout << f(x, 4) << endl;
	cout << x[1] << endl;
	return 0;
}