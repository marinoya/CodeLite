#include <iostream>
using namespace std;

//Task1 - create 2 classes - one of them should be a part of teh ther's data
//Both should have at least 3 construcvtors, 3 data members- shopuld be both public and prvate, 3 methods
//friend - access to provate members from outside the class - both fiunctions and pther classes can be "friend"
//this - e pointer to self/ eqivalent to obj* p = &obj1


class Profession
	{
		int level;
		bool isPrimary;
public:
		//enum professionType {fighter, cleric , wizard};
		//professionType profTy;
		string professionType;
		Profession()
		{
			cout << "I'm a default constructor Profession and have no data" << endl;
		}
		
//		Profession (professionType _prof): profTy(_prof)
//		{
//			cout << "I'm a " << profTy << endl;
//		}
//		Profession(int _level, bool _isPrimary, string _professionType):level(_level), isPrimary(_isPrimary), professionType(_professionType)
//		{
//			cout << "I'm a param constructor Profession and have data" << endl;
//		}
//		Profession(int level, bool isPrimary, string professionType): this->level(level), this->isPrimary(isPrimary), this->professionType(professionType)
//		{
//			cout << "I'm a param constructor Profession with this and have data" << endl;
//		}
		void getProfessionType()
		{
			cout << professionType << endl;//x = _x
			cout<< this->professionType<< endl;//this->x=x
			cout << (* this).professionType<<endl;
		}
		
		void setProfessionType (string professionType)
		{
			this -> professionType = professionType;
		}
		
		
		
	};


class Dwarf
	{
	string name{};
	
	//friend
	int age {10};
	
	friend void getAge (Dwarf &d1);
	
	friend class Profession;
	
	Profession prof;

	enum heritage 
	{
		hill, 
		mountain, 
		cave
	};
	
public:	
	heritage her;
	
	//default constructor
	Dwarf ()
	{
		cout << "I'm a  default constructor and have no data" << endl;
	}
		
	//param constructor
	Dwarf (string _name, int _age /*,enum _heritage*/):name(_name), age(_age)//, heritage(_heritage) 
	{
		cout << "I'm a parametrized constructor and have data" << endl;
	}
	
	//copy constructor
	Dwarf (const Dwarf &d1):name(name), age(age)//, heritage(_heritage) 
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
	
	void setHeritage (heritage her)
	{
		this -> her = her;
	}
	
	void printInfo ()
	{
		cout << name << " " << age << " " << endl;
	}

	};
	
	void getAge (Dwarf &d1)
	{
		d1.age = 50;
		cout << d1.age<< endl;
	}
	



int main (){
	cout << "Hello world" << endl;
	
	Profession fighter;
	
	//Profession cleric(professionType );
	
	Dwarf dwarfy;
	getAge(dwarfy);
	return 0;
	}
	
	