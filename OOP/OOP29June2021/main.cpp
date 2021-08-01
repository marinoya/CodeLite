#include <iostream>
using namespace std;

class Vehicle {
protected:
	bool hasWheels;
	int numberOfPassengers;
	
	
	
	virtual void transport() = 0;
	};

class Car : public Vehicle {
	bool is electric;
public:
	void honk(){
		cout << "Beeeeep!"<< endl;
	}
	void transport() {};
	
	};

class Kia : public Car {
public:
	string model;
	int year;
	int cost;
	
	string* color = new string;
	
	Kia(){
		cout << "Default Kia constructor"<< endl;
	}
	Kia(string model, int year, int cost):model(model), year(year), cost (cost){
		cout << "Parametrised Kia constructor"<< endl;
		}
	void transport(){};
	
	~Kia(){
		delete color;
	}
	
	};


//dynamic memory - Heap vs static memory - stack
//new , delete
 
int main (){
	cout << "Hello world" << endl;
	
	
	Kia k1 {"Sportage", 2020, 50};
	k1.honk();
	cout << k1.model<< endl;
	 
	 
	 int *p = new int; //request memory allocation
	 *p = 5; // store new value ibn allocated memory
	 delete p; //free up memory - creates    a dangling pointer
	 p = new int;
	 
	 //int * p = NULL;
	 p = new int[20];
	 delete [] p;
	
	return 0;
	}