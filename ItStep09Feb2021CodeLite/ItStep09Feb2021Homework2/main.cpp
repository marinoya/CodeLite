#include <iostream>
using namespace std;

void printArr(int *arr, int arrSize)
{
	for(int i = 0; i<= arrSize; ++i)
	{
		cout << arr[i]<< '\t';
	}
	cout << endl;
}
	
void reveArr (int arr[], int size)
{
	for (int i = size-1; i >=0; i--)
	{
		cout << arr[i] << " " ;
	}
	cout << endl;
}
void revaRR(int *arr, int arrSize)
{
	arr[0]=1024;
	
}

int main (){
	
	int arrA[10] = {1,2,3,4,5,6,7,8,9,10};
	
	//print
	printArr(arrA, 10);
	
	reveArr(arrA, 10);//
	// print = 10,9,8,7,6,5,4,3,2,1
	
	
	
	
	return 0;
	}