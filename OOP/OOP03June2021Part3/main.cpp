#include <iostream>
using namespace std;

class Mother{
private:
	string maidenName;
public:
	string hairColor;
	int weight;
	
	Mother(){
		this->maidenName = "Heidi";
		this->hairColor = "Blonde";
		this->weight = 56;
	}
	
	Mother(int weight){
		this->weight = weight;
	}
	
	void sing(){
		cout<< "Sing like me"<< endl;
	}
	
	~Mother(){
		cout << "mother ends" << endl;
	}
};

class Father{
private:
	int longevity;
public:
	string eyeColor;
	int height;
	
	Father(){
		this->longevity = 73;
		this->eyeColor = "Blue";
		this->height = 189;
	}
	
	Father(int height){
		this->height = height;
	}
	
	void drink(){
		cout<< "Drink like me"<< endl;
	}
	
	~Father(){
		cout << "father ends" << endl;
	}
};

class Daughter : public Mother, public Father{
public:
	Daughter(){
		
	}
	void programmingGuru(){
		cout<<"Coding"<<endl;
	}
	
};

int main (){
	//cout << "Hello world" << endl;
	
	Daughter d1;
	cout << d1.eyeColor << endl;
	
	
	return 0;
	}