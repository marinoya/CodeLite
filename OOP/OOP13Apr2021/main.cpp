#include <iostream>
using namespace std;


//Class - name, attributes, behaviour - methods
//Класовете се обявяват отгоре, или най добре в отделен файл, или един файл, за деклариране и друг за ...

//Abstraction - позволява да опишем и неща които не можем да видим или докоснем (банкова сметка)
//			-defining only the needed data inside the class implementation
//Objects - identity, attributes, behaviour - attrinutes are a representaton of the current state
//3 principles of OOP - Encapsulation, Inheritance  and Polymrphism (and Abstraction)
//Encapuslation - (прикриване на данни) 
//				- access specifier allows to hide - Public, Private, protected
class Barbarian // allways Cap
{
	int age{};				//by default all attributes are private unless otherwise specified
public: 					//access specifier
	int attackPts {};		//attributes
	int defensePts {};
	string name {};
	
	void attack()			//methods
	{
		cout << name << " attacks for: "<< attackPts << endl;
	}
	
	void defend()
	{
		cout << name << " defends with for: "<< defensePts << endl;
	}
	
	//setters and getters
	void setGold (int value)
	{
		gold = value;
	}
	int  getGold ()
	{
		return gold;
	}
	
private:
	int gold = 1000;
	
};

//creaTE A CLASS BY CHOISE

//class Wizard
//{
//public:
//	string name {};
//	unsigned int level {};
//	int healthPts {};
//	unsigned int manaPts {};
//	
//	int castFireball
//	{
//		if(manaPts >= fireball.cost()) //проверява дали има достатъчно точки мана
//		{
//			fireball.cast(); //връща инт който ще е daamaga от fireball
//		}else{
//			cout<<"not enough mana points"<< endl;
//		}
//	};
//	
//};



//constructors - called upon object creation - default, paramenters , copy 
class Dog
{
public:
	
	Dog()
	{
		cout << "Bark, bork!" << endl;
	}//default constructor
	
	Dog(string _breed, string _name)
	{
		breed = _breed;
		name = _name;
	}
	
	Dog(int _age)
	{
		age = _age;
	}
	
	string name;
	string breed;
	int age;
	
	void bark()
	{
		
	}
	
};


int main (){
	//cout << "Hello world" << endl;
	
	Barbarian pesho;
	pesho.name = "Pesho";
	pesho.attackPts = 20;
	pesho.attack();
	//cout << pesho.gold()<< endl;
	cout << "Gols for "<< pesho.name <<" is "<< pesho.getGold() << endl;
	
	Dog d1;
	
	return 0;
	}