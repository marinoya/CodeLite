#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

float findPar (float sideA, float sideB, float sideC){
	float p = sideA +sideB+sideC;
	return p;
	
	}

void findPerimeter (float sideA, float sideB, float sideC){ //function definition - return(void), name, arguments in ()(name and type of args)
	
	float p = sideA +sideB + sideC;
	cout << "Perimeter of triangle with sides :"<< endl;
	cout << "a = "<< sideA << "b = "<< sideB << "c = " <<sideC<<endl;
	cout << "is = "<< p << endl;
	
	}

int perimeterOfRectangle (int sa, int sb, int sc, int sd){
	
	//if(sa == sc && sb == sd && sa > 0 && sb > 0){
	//	return sa+sb+sc+sd;}else{
	//		return -1;}
	
	int result = (sa> 0 && sb > 0) ? (sa*2+sb*2) : -1; // not using if
	return result;
	}


int main (){
	cout << "Hello world" << endl;
	
	cout << perimeterOfRectangle(1, 2, 1, 2);
	
	
	// Functions
	
//	float a{5}, b{7}, c{6};
//	
//	float p;
//	p= a+b+c;
//	
//	cout <<"Perimeter of the riangle is: "<<p<<endl;
//	
//	findPerimeter (a, b, c);
//	
//	findPerimeter (1, 2, 3);
//	
//	findPerimeter (2.3, 5.5, 16);
//	
//	findPerimeter (0, -4, 7);
//	
//	
	return 0;
	}