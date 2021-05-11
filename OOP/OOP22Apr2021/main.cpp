#include <iostream>
using namespace std;

//-----------pregovor------
	//class - name, attribute, behavior
	//object - identity, attribute, behavior
	//Abstraction - using only needed data
	//Encapsulation, inheritance(0onasledyavane)polymorphism
	//encapsulation- data hiding
	//Access specifier - private, public, protected
	//Constructors - objext stamps - default, parametrized, copy constructor
	//Methods - class functions
	//Data in separate file Human.h Human.cpp
	//pre-processor - ifndef, define - bonus knowledge
	//destructor - nit mandatory, called upon object destruction

//{
//class GeoFig
//{
//	private:
//	int a, b, c {0};
//	public:
//	//constructors
//	GeoFig ()
//	{
//		cout << "I have no sides, I am not a real figure!" << endl;
//	}
//	
//	GeoFig (int x, int y, int z)
//	{
//		cout << "I am a triangle" << endl;
//		a = x;
//		b = y;
//		c = z;
//	}
//	
//	GeoFig (int x, int y)
//	{
//		cout << "I am a rectangle" << endl;
//		a = x;
//		b = y;
//	}
//	//setters
//	void setSides (int x, int y)
//	{
//		a = x;
//		b = y;
//	}
//	
//	void setSides (int x, int y, int z)
//	{
//		a = x;
//		b = y;
//		c = z;
//	}
//	
//	//getters
//	
//	void getSides ()
//	{
//		if (c == 0)
//		{
//			cout << "side a is "<< a <<" and side b is "<< b << endl;
//		}else{
//			cout << "side a is "<< a <<" side b is "<< b << " and side c is "<< c<<endl;
//		}
//	}
//	//area calculation method
//	void areaCalc()
//	{
//		if (c == 0)
//		{
//			cout << "area is "<< a * b << endl;
//		}else{
//			cout << "area is "<< (a *c) /2 <<endl;
//		}
//	}
//};
//
//class Student
//{
//	public:
//	int age = 10;
//};
//
//class Human
//{
//	public:
//	int age;
//	int weight;
//	int height;
//	
//	Human()
//	{
//		
//	}
//	Human(int _age)
//	{
//		age = _age;
//	}
//	Human(int _age, int _weight)
//	{
//		age = _age;
//		weight = _weight;
//	}
//	//copy constructor
//	Human(const Human &h1)
//	{
//		age = h1.age;
//		weight = h1.weight;
//		height = h1.height;
//		
//	}
//	Human (const Student &s)
//	{
//		age = s.age;
//	}
//	
//};




#include "Human.h"

int main (){
	
	//GeoFig sq (2,4);
	
	//Student s1;
	Human h1(18, 50);
	Human h2 = h1;
	
	//destructor
	
	cout << "Hello world" << endl;
	return 0;
	}