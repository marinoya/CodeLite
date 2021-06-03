#include <iostream>
using namespace std;
//#include "Human.h"

	//attributes - temporary/current condition of the obj
	//Abstraction - defining/ including only the deeded data (no unneccesary data)
	//public members - class interface
	//human.age - '.' is a selection operator (prinadlejnost)
	//selection operator '->' (only with pointers)
	//this
	//Constant objects - const obj can't call non-const methods
	//member initializer list - specialnia constructor
	//if it can be made a constant - make it a cosntant - less trouble in the future(good practice)
	//composition - segmenting objects into smaller parts
	
	
	class Birthday
	{
public:
		Birthday(int m, int d , int y):month(m), day(d), year(y)
		{
			
		};
private:
		int month;
		int day;
		int year;
		
		void printdata()
		{
			cout<<"Happy Birthday"<< endl;
		}
	};
	
	class Human{
		int age = 10;
		const int weight = 60;
		Birthday bd;
public:
		int height = 180;
//		Human ()
//		{
//			cout << "created" << endl;
//		};
//		Human(int _age, int _height)
//		{
//			int age = _age;
//			int height = _height;
//		};
		//Special Constructor that sets teh const parameters
		Human (int _weight):weight(_weight)
		{
		}
		//member initialiser list - type constructor
		Human (int _weight, int _age, int _height):weight(_weight), age(_age), height(_height) // preporachirtelen konstrustcor za6toto pokriva i dvata varianta za obyavyavane (i za konstanti i pri ne-konstanti)
		{
		}
		
		
		
		void sayHi()
		{
			cout <<" Haaai "<< endl;
		};
		
		void printInfo()
		{
			cout<<"age is: "<<age<<" and height is: "<< height<< endl;
		}
		void printInfo() const
		{
			cout<<"age is: "<<age<<" and height is: "<< height<< endl;
		}
	};
	
	
	
int main (){
	cout << "Hello world" << endl;
	
	
	const int x = 10;
	
	Human h1;
	cout<< h1.height << endl;;
	
	Human* ptr1;
	ptr1 = &h1;
	
	cout << ptr1 -> height << endl;
	
	
	const Human h2;
	
	h2.printInfo();
	h1.sayHi();
	
	Birthday bd1 (x,y,x);
	Human h3(int age1, Birthday bd3)
	
	
	return 0;
	}