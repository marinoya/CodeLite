#include "Human.h"
#include <iostream>
using namespace std;

Human::Human()
	{
		
	}
Human::Human(int _age)
	{
		age = _age;
	}
Human::Human(int _age, int _weight)
	{
		age = _age;
		weight = _weight;
	}
	//copy constructor
Human::Human(const Human &h1)
	{
		age = h1.age;
		weight = h1.weight;
		height = h1.height;
		
	}
//	Human (const Student &s)
//	{
//		age = s.age;
//	}
	Human::~Human()
	{
		cout<<"Destroyed"<<endl;
	}


