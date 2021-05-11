#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>
#include <cstring>

void drawTopRightTriangle(int size);
void drawBottomLeftTriangle(int size);
void drawTopLeftTriangle(int size);
void drawBottomRightTriangle(int size);
void drawTopTriangle(int size);
void drawBottomTriangle(int size);
void drawTopAndBottomTriangle(int size);
void drawLeftTriangle(int size);

//. Дадена е квадратна матрица от типа n (n редове, n
//колони). Да се намери най-голямото от значенията на 
//елементите разположени в тъмно сините части на 
//матрицата.
//Всичките масиви в даденото домашно се запълват на
//случаен принцип

int main (){
//	cout << "Hello world" << endl;
//	
//	
//	srand(time(NULL));
//	int arr[10];
//	for (int i = 0; i <10; ++i)
//	{
//		arr[i] = rand()%100;
//		cout << arr[i] << " ";
//	}
	
//	const int row {3};
//	const int col {4};
//	int arr [row][col] = {{1,2,3,4},{5,6,7,8},{9}};
//	
//	
//	for (int i =0; i<row; ++i)
//	{
//		for (int j = 0; j < col; ++j)
//		{
//			arr[i][j] = rand()%64;
//			cout << arr[i][j] << "  ";  
//		}
//		cout << "\n\n";
//	}
	
	
//	const int row {3};
//	const int col {4};
//	int arr[row][col];
//	
//	for (int i = 0; i < row; ++i)
//	{
//		for (int j=0; j< col; ++j)
//		{
//			arr[i][j] = rand()%100;
//			cout << arr[i][j]<< "  ";
//		}
//		cout << "\n\n";
//	}
//	int counter {0};
//	for (int i = 0 ; i < row; ++i)
//	{
//		int max = arr[i][0];
//		for(int j = 0; j < col ; ++j)
//		{
//			if (arr[i][j]==0)
//			{
//				++ counter;
//			}
//		}
//	}
//	cout << "counter is " << counter<< endl;
	
	
//	const int row = /*rand()%*/8;
//	const int col = /*rand()%*/8;
//	
//	int arr[row][col] {{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0}};
//	
//	int max = 0;
//	
//	for (int i = 0; i< row; ++i)
//	{
//		for (int j = i; j< col; ++j)
//		{
//			arr[i][j] = rand()%78;
//			if (arr[i][j]>max)
//			{
//				max = arr[i][j];
//			}
//		}
//	}
//	for (int i = 0; i< row; ++i)
//	{
//		for (int j = 0; j< col; ++j)
//		{
//			cout<<arr[i][j]<< "\t";
//		}
//		cout << "\n\n\n";
//	}
//	cout << "\n\nmax is " << max << endl;
	
	
//	drawTopRightTriangle(8);
//	drawBottomLeftTriangle(9);
//	drawTopLeftTriangle(8);
//	drawBottomRightTriangle(9);
//	drawTopTriangle(8);
	drawBottomTriangle(9);
	drawTopAndBottomTriangle(8);
	drawLeftTriangle(9);
	
	return 0;
	}
	
	void drawTopRightTriangle(int size)
	{
		const int row = size;
		const int col = size;
	
		int arr[row][col];// = {0};
		memset(arr , 0, sizeof(arr));
	
		int max = 0;
	
		for (int i = 0; i< row; ++i)
		{
			for (int j = i; j< col; ++j)
			{
				arr[i][j] = rand()%78;
				if (arr[i][j]>max)
				{
					max = arr[i][j];
				}
			}
		}
		for (int i = 0; i< row; ++i)
		{
			for (int j = 0; j< col; ++j)
			{
				cout<<arr[i][j]<< "\t";
			}
			cout << "\n\n\n";
		}
		cout << "\n\nmax is " << max << endl;
	}
	
	void drawBottomLeftTriangle(int size)
	{
		const int row = size;
		const int col = size;
	
		int arr[row][col];// = {0};
		memset(arr , 0, sizeof(arr));
	
		int max = 0;
	
		for (int i = 0; i< row; ++i)
		{
			for (int j = 0; j<= i; ++j)
			{
				arr[i][j] = rand()%78;
				if (arr[i][j]>max)
				{
					max = arr[i][j];
				}
			}
		}
		for (int i = 0; i< row; ++i)
		{
			for (int j = 0; j< col; ++j)
			{
				cout<<arr[i][j]<< "\t";
			}
			cout << "\n\n\n";
		}
		cout << "\n\nmax is " << max << endl;
	}
	
	void drawTopLeftTriangle(int size)
	{
		const int row = size;
		const int col = size;
	
		int arr[row][col];// = {0};
		memset(arr , 0, sizeof(arr));
	
		int max = 0;
	
		for (int i = 0; i< row; ++i)
		{
			for (int j = 0; j< col-i; ++j)
			{
				arr[i][j] = rand()%78;
				if (arr[i][j]>max)
				{
					max = arr[i][j];
				}
			}
		}
		for (int i = 0; i< row; ++i)
		{
			for (int j = 0; j< col; ++j)
			{
				cout<<arr[i][j]<< "\t";
			}
			cout << "\n\n\n";
		}
		cout << "\n\nmax is " << max << endl;
	}
	
	void drawBottomRightTriangle(int size)
	{
		const int row = size;
		const int col = size;
	
		int arr[row][col];// = {0};
		memset(arr , 0, sizeof(arr));
	
		int max = 0;
	
		for (int i = 0; i< row; ++i)
		{
			for (int j = col-i; j< col; ++j)
			{
				arr[i][j] = rand()%78;
				if (arr[i][j]>max)
				{
					max = arr[i][j];
				}
			}
		}
		for (int i = 0; i< row; ++i)
		{
			for (int j = 0; j< col; ++j)
			{
				cout<<arr[i][j]<< "\t";
			}
			cout << "\n\n\n";
		}
		cout << "\n\nmax is " << max << endl;
	}
	
	void drawTopTriangle(int size)
	{
		const int row = size;
		const int col = size;
	
		int arr[row][col];// = {0};
		memset(arr , 0, sizeof(arr));
	
		int max = 0;
	
		for (int i = 0; i< row/2; ++i)
		{
			for (int j = 0+i; j< col-i; ++j)
			{
				arr[i][j] = rand()%78;
				if (arr[i][j]>max)
				{
					max = arr[i][j];
				}
			}
		}
		for (int i = 0; i< row; ++i)
		{
			for (int j = 0; j< col; ++j)
			{
				cout<<arr[i][j]<< "\t";
			}
			cout << "\n\n\n";
		}
		cout << "\n\nmax is " << max << endl;
	}
	
	void drawBottomTriangle(int size)
	{
		const int row = size;
		const int col = size;
	
		int arr[row][col];// = {0};
		memset(arr , 0, sizeof(arr));
	
		int max = 0;
	
		for (int i = row/2; i< row; ++i)
		{
			for (int j = (col-i)-1; j<=i; ++j)
			{
				arr[i][j] = rand()%78;
				if (arr[i][j]>max)
				{
					max = arr[i][j];
				}
			}
		}
		for (int i = 0; i< row; ++i)
		{
			for (int j = 0; j< col; ++j)
			{
				cout<<arr[i][j]<< "\t";
			}
			cout << "\n\n\n";
		}
		cout << "\n\nmax is " << max << endl;
	}
	
	void drawTopAndBottomTriangle(int size)
	{
		const int row = size;
		const int col = size;
	
		int arr[row][col];// = {0};
		memset(arr , 0, sizeof(arr));
	
		int max = 0;
	
		for (int i = 0; i< row/2; ++i)
		{
			for (int j = 0+i; j<col-i; ++j)
			{
				arr[i][j] = rand()%78;
				if (arr[i][j]>max)
				{
					max = arr[i][j];
				}
			}
			
		}
		for (int i = row/2; i< row; ++i)
		{
			for (int j = (col-i)-1; j<=i; ++j)
			{
				arr[i][j] = rand()%78;
				if (arr[i][j]>max)
				{
					max = arr[i][j];
				}
			}
			
		}
		for (int i = 0; i< row; ++i)
		{
			for (int j = 0; j< col; ++j)
			{
				cout<<arr[i][j]<< "\t";
			}
			cout << "\n\n\n";
		}
		cout << "\n\nmax is " << max << endl;
	}
	
	void drawLeftTriangle(int size)
	{
		const int row = size;
		const int col = size;
	
		int arr[row][col];// = {0};
		memset(arr , 0, sizeof(arr));
	
		int max = 0;
	
		for (int i = 0; i< row; ++i)
		{
			for (int j = 0; j<=i; ++j)
			{
				if ((i>=row/2)&&(j==(row-i)))
				{
					break;
				}
				arr[i][j] = rand()%78;
				if (arr[i][j]>max)
				{
					max = arr[i][j];
				}
			}
		}
		for (int i = 0; i< row; ++i)
		{
			for (int j = 0; j< col; ++j)
			{
				cout<<arr[i][j]<< "\t";
			}
			cout << "\n\n\n";
		}
		cout << "\n\nmax is " << max << endl;
	}
	
	
	