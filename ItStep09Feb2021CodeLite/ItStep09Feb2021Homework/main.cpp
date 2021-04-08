#include <iostream>
using namespace std;


const int size = 3;


void printArr(int *arr, int arrSize)
{
	for(int i = 0; i<= arrSize; ++i)
	{
		cout << arr[i]<< '\t';
	}
	cout << endl;
}

void printVariations(int *arr, int n, int start=0)
{
	if (start==n)
	{
		printArr(arr, n);
		return;
	}
	//
	printVariations(arr, n-1);
	//
	
	printVariations(arr, n-1);
	
}

int main (){
	cout << "Hello world" << endl;
	
	int a[size];
	
	printArr(a, size)
	
	
	return 0;
	}