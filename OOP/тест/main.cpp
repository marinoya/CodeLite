#include <iostream>
using namespace std;

int arrayComparer (int* arr1, int size1, int* arr2, int size2);

int main (){
	cout << "Hello world" << endl;
	
	int[] arr1 = {1,2,3,4,5};
	
	int[] arr2 = {1,2,3,4,5,7,8,9,6,5,5};
	
	cout << arrayComparer(arr1 ,5,arr2,11) << endl;
	
	return 0;
	}
	
int arrayComparer (int* arr1, int size1, int* arr2, int size2){
		
	int size;
	
	if(size1 > size2){
		size = size2;
	}else{
		size = size1;
		}
		
	int counter = 0;
	
	for (int i = 0; i < size; i++){
		if (arr1[i] == arr2[i]){
			counter++;
		}else{
			break;
		}
	}
		return counter;
}