#include <iostream>
using namespace std;

//TASK1 - Create separate classes implementing a logical class tree - A is B (Fox is a Mammal,Mammal is Animal, Animal is Animate)
//each class should have all 3 constructors, destructor, operator overload, at least 3 attributes(at least one private), at least 2
//behaviour methods(excluding setters and getters)
class Animal {
private:
	bool canSwim{};
public:
	int legs{};
	bool hasTail{};
	Animal (bool canSwim, int legs, bool hasTail){
		this->legs = legs;
		this->hasTail = hasTail;
	};
	
	void procreate(){cout<<"make offspring"<<endl;}
	
	~Animal(){cout<<"Animal ends"<<endl;};
	
};


class Mammal : public Animal{
private:
	
public:
	
	
	Mammal(){};
	
	~Mammal(){cout<<"Mammal ends"<<endl;};
};






class Dog : public Mammal{
private:
	string name{};
public:
	int age{};
	string breed{};
	
	
	//default constructor
	Dog ()
	{
		cout << "I'm a  default constructor and have no data" << endl;
	}
		
	//param constructor
	Dog (string _name, int _age, string _breed ):name(_name), age(_age), breed(_breed)
	{
		cout << "I'm a parametrized constructor and have data" << endl;
	}
	
	//copy constructor
	Dog (const Dog &d) : name(d.name), age(d.age), breed(d.breed) 
	{
		cout << "I'm a copy constructor" << endl;
	}
	
	//setters
	void setName (string name)
	{
		this->name = name;
	}
	
	void setAge (int age)
	{
		this->age = age;
	}
	
	void setBreed (string breed)
	{
		this -> breed = breed;
	}
	
	//methods
	void printInfo ()
	{
		cout << name << " " << age << " " << " " << breed << endl;
	}
	//operator overload
	void operator+ (string food)
	{
		cout<< name << " eats " << food<< endl;
	}
	
	void operator/ (int num)
	{
		cout << name << " wags tail " << num <<" times"<< endl;
	}
	
};



int main (){
	cout << "Hello world" << endl;
	
	Dog sharo ("Sharo" , 4 , "melez");
	
	sharo.printInfo();
	
	sharo + "kokal";
	
	sharo / 4; 
	
	return 0;
	}