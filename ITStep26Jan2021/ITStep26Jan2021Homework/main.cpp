#include <iostream>
using namespace std;
//Да се напише функция която проверя дали два масива са еднакви.

template <typename T> bool arrayChecker (T arr[], int sizeOfArr);

int main (){
	cout << "Hello world" << endl;
	return 0;
	}
	
template <typename T> bool arrayChecker (T arr1[], T arr2[], int sizeOfArr)
{
	for (int i = 0; i < sizeOfArr; i++)
		{
			if ( arr1[i] != arr2[i] )
			{
				return 0;
			} 
		}
	return 1;
}