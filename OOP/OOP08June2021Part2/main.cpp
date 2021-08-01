#include <iostream>
using namespace std;

class Enemy 
{
protected:
	int attackPwr{};
public:
	void setPwr(int x)
	{
		this -> attackPwr = x;
	}
};

class Ninja : public Enemy
{
public:
	void attack()
	{
	cout << "ninja - " << attackPwr << endl;
	}
};

class Monster: public Enemy
{
	public:
	void attack()
	{
	cout << "monster - " << attackPwr << endl;
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
	
	//e1 -> attack();
	e2 -> setPwr(20);
	//e2 -> attack();
	
	return 0;
	}