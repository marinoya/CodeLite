#include <iostream>
using namespace std;

//Polymorphism - a method is named the same name among all classes but can do different things in each class
//in inheritance not all methods are inherited - Constructors, destructors , friends and opertaor overloading are not inherited

//task  - create 3 separate classes - - a game with monsters, 
// 3 constructors(form each type), at least 3 attributes(one proivate), 
// at least 3 methods, not counting setters and getters, at least 2 overloaded operators
enum Allegiance {Good, Neutral, Evil};
class Opponent
{
private:
	bool isCombatant;
protected:
	Allegiance side;
	int level;
public:
//constructors
	Opponent() {
		cout << "I'm a default constructor and have NO data" << endl;
	}
	Opponent(int level, Allegiance al, bool isCombatant):level(level), side(al), isCombatant(isCombatant) {
		cout << "I'm a parametrized constructor and have data" << endl;
	}
	Opponent(Opponent &o1):level(o1.level), side(o1.side) {
		cout << "I'm a Copy constructor" << endl;
	}
//setters
	void setIsCombatant(bool canFight) {
		isCombatant = canFight;
	}
	void setAllegiance(Allegiance al) {
		side = al;
	}
	void setLevel (int level) {
		this -> level = level;
	}
//methods
	bool engage() {
		if(isCombatant==true)
		{
			return true;
		}else{
			return false;
		}
	}
	Opponent summon() {
		return /*new*/ Opponent(level, side, true) ;
	}
	void taunt() {
		cout << "You are a fool and you shall die!" << endl;
	}
	
};

class Monster : private Opponent
{
private:
	int health{};
	int level{};
	
	
	public:
	Monster(){};
//	Monster(){};
//	Monster(){};
};

class Ork : public Monster
{
	//attributes
private:
	int health{};
	int level{};
public:
	string orkType{};
	
	//constructors
	Ork(){cout << "I'm a  default constructor and have no data" << endl;};
	Ork(int health, int level, string orkType):health(health), level(level), orkType(orkType){cout << "I'm a parametrized constructor and have data" << endl;};
	Ork(Ork &o1):health(o1.health), level(o1.level), orkType(o1.orkType){cout << "I'm a copy constructor" << endl;};
	~Ork(){};
	
	//methods
	void setHealth(int health)
	{
		this -> health = health;
	}
	void setLevel(int level)
	{
		this -> level = level;
	}
	void setOrkType(string orkType)
	{
		this -> orkType = orkType;
	}
	void attack ()
	{
		cout << "Ork attacks! "<< endl;
	}
	
	
	
};



int main (){
	cout << "Hello world" << endl;
	return 0;
	}