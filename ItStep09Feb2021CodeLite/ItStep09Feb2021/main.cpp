#include <iostream>
using namespace std;



int sumOfArray(int a[], int arrSize)
{
	if(arrSize<=0)
	{
	return 0;
	}
	cout << a [arrSize -1] << endl;
	return a[arrSize-1] + sumOfArray(a, arrSize-1);
	
}

void printArr (int a[], int arrSize)
{
	static int i{0}; 
  
    if (i == arrSize) { 
        i = 0; 
        cout << endl; 
        return; 
    } 
  
    cout << a [i] << " "; 
    i++; 
    printArr(a, arrSize); 
	
}

void printArr2 (int a[], int arrSize, int i =0)
{
    if (i == arrSize) { 
        return; 
    } 
  
    cout << a[i] << " "; 
    
    printArr2(a, arrSize, i+1); 
	
}


void f(int i, int j {0})
{
	if (j == i)
	{
		cout<< endl;
		return;
	}
	for(int k = 0; k)
	cout <<
	
}

int main (){
	cout << "Hello world" << endl;
	
	int a[] = {1,5,1,1};
	cout << sumOfArray(a,4) << endl;
	
	printArr2(a ,4);//1 5 1 1
	
	
	f(3);
	/*
	1 0 0 
	0 1 0
	
	  * */
	
	return 0;
	}