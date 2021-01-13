#include <iostream>
using namespace std;

int main (){
	cout << "Hello world" << endl;
	
	//int ageX = 12, ageY = 33, ageZ = 54;
	
	int a[] = {12,33,54,7,99,678}
	
	int age[3];
	age[0] = 12;
	age[1] = 33;
	age[2] = 54;
	
	cout << age[2] << endl;
	
	age[2] ++;
	
	cout << age[2] <<endl;
	
	for(int i = 0; i<6; i++){
		cout << a[i]<< endl;
		}
	
	const int sizeOfArray = 10;
	int n {0};
	cin >> n;
	if ( n <= sizeOfArrray && n>0 ){
		for (int i = 0; i<n; i++){
			cout <<"number" << i+1 <<" = " << a[i]<<endl;
			}
	}
	
	for (int i = sizeOfArray-1; i>=0 ; i--){
		if(a[i]%3==0){
			cout  <<"the last index of a number divisible by 3 is: " << i << endl;
			break;}
		}
	
	
	
	
	
	//return 0;
	}