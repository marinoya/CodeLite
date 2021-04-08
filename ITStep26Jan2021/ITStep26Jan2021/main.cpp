#include <iostream>
using namespace std;

void f1();
void f2 ();

//PROTOTYPE

double perimeterTriangle(double, double, double);

void printArray(int arr[], int  sizeofArr);

int sumOfElemsInArr (int arr[], int sizeOfArr);

																																																																																																																																																																																																																																																																																																				
																																																																																																																																																																																																																																																																																																				int firstZero (int arr[], int sizeOfArr);

//function overload and templating
template <typename T> void printArr (T arr[], int sizeOfArr);
template <typename T> T perimeter (T side A);
int main (){
	cout << "Hello world" << endl;
	
	cout<< perimeterTriangle(5, 7, 9) << endl;
	
	
	int a[] = {2,3,6,5,8,4,7};
	double c[] = {2.3,5.6,78.5,9.8,7.4,8.2,1.5,0.0};
	
	printArray(a, 7);
	cout << sumOfElemsInArr(a,7) << endl;
	
	printArr (a);
	printArr (c);
	
	return 0;
	}
	
	
	
	
	
	
	double perimeterTriangle(double sideA, double sideB, double sideC)
	{
		return sideA+sideB+sideC;
	};
	
	void printArray(int arr[], int sizeofArr)
	{
		for (int i = 0; i < sizeofArr; i++)
			{
				cout << arr[i]<<'\t';
			}
			cout << endl;
	}
	
	
	int sumOfElemsInArr (int arr[], int sizeOfArr)
		{
			int sum {0};
			for(int i = 0; i <sizeOfArr; i++)
				{
					sum+=arr[i];
				}
			return sum;
		}
		
		int firstZero (double arr[], int sizeOfArr)
		{
			for (int i = 0; i < sizeOfArr; i++ )
				{
					if (arr[i] == 0.0)
						{
							return i;
						}
				}
				return -1;
		}