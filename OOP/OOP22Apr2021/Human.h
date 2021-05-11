#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
using namespace std;

class Human
{
	int speed;
public:
	int age;
	int weight;
	int height;
	
	Human();
	
	Human(int _age);
	Human(int _age, int _weight);
	
	Human(const Human &h1);
	//destructor
	~Human();
};
#endif //HUMAN_H