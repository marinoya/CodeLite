#include <iostream>
using namespace std;
//Task 1 - Create a game hero class- at least 3 datat members(at least one should be private), constuctors(at least 3 - one of aech type)
//setter and getter methods, destructor - use this keyword when possible
//Task 2 - create at least 4 operator overloading options for your class
class Cleric
	{
private:
	string name{};
	
	int age {10};
	
	enum Diety 
	{
		life, 
		death, 
		nature
	};
	
	Diety di;
	
public:	
	
	//default constructor
	Cleric ()
	{
		cout << "I'm a  default constructor and have no data" << endl;
	}
		
	//param constructor
	Cleric (string _name, int _age ):name(_name), age(_age)
	{
		cout << "I'm a parametrized constructor and have data" << endl;
	}
	
	//copy constructor
	Cleric (const Cleric &c1):name(c1.name), age(c1.age) 
	{
		cout << "I'm a copy constructor" << endl;
	}
	
	void setName (string name)
	{
		this->name = name;
	}
	
	void setAge (int age)
	{
		this->age = age;
	}
	
	void setDiety (Diety di)
	{
		this -> di = di;
	}
	
	void printInfo ()
	{
		cout << name << " " << age << " " << endl;
	}

	};

	//operator overloading
	class MyClass
	{
	public:
		int i;
		MyClass()
		{
		}
		
		MyClass(int a):i(a)
		{
			
		}
		
		MyClass operator+ (MyClass &obj1)
		{
			MyClass res;
			res.i = this -> i + obj1.i;
			return res;
		}
		
		void operator+ (int obj1)
		{
			cout<< this -> i + obj1;
		}
		
		void operator* (int a)
		{
			cout<< this -> i * a;
		}
		
		void operator< (int a)
		{
			cout<< this -> i - a;
		}
		
		void operator> (int a)
		{
			cout<< this -> i + a;
		}
		
	};
	


int main (){
	cout << "Hello world" << endl;
	
	MyClass obj1;
	MyClass obj2;
	MyClass obj3 = obj1 + obj2;
	MyClass obj4 = obj1 + 5;
	
	
	return 0;
	}