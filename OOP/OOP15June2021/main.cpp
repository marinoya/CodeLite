#include <iostream>
using namespace std;
//virtual function
//Abstract class - MUST contain at least one pure virtual function , CANT create objects! Used as a template for creating other classes


class Enemy 
{
protected:
	int attackPwr{};
public:
	void setPwr(int x)
	{
		this -> attackPwr = x;
	}
	
	//virtual function - may be overrirden in deriver(inheritor) class
	virtual void attack(){cout<< "enemy attacks!"<<endl;}
	//Allows the Enemy pointer to access the method of the Ninja Object (inheritor)
	//internal logic of the pointer allows it to look for other implementations down the inheritance tree
	
	//Pure Virtual method - MUST be overloaded in derived(inheritor) class
	virtual void defense() = 0;
};

class Ninja : public Enemy
{
public:
	void attack()
	{
	cout << "ninja attacks with power - " << attackPwr << endl;
	}
	void defense()
	{
		cout << "ninja defends " << endl;
	}
};

class Monster: public Enemy
{
	public:
	void attack()
	{
	cout << "monster attacks with power - " << attackPwr << endl;
	}
	void defense()
	{
		cout << "monster defends " << endl;
	}
};

int main (){
	cout << "Hello world" << endl;
	
	Ninja n;
	Monster m;
	n.attack();
	m.attack();
	
	Enemy *e1 = &n;
	Enemy *e2 = &m;
	
	e2 -> setPwr(20);
	e1 -> attack(); // error : 'class Enemy' has no member named 'attack'; did you mean 'attackPwr'?
	e2 -> attack();
	
	
	
	
	return 0;
	}