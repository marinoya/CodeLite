#include <iostream>
using namespace std;


class Mother{
public:
	Mother(){
		cout << "mother class" << endl;
	};
	void sayHi (){
		cout << "hi" << endl;
	}
	~Mother(){cout << "mother killed" << endl;};
};

class Father{
public:
	Father(){cout<<"Father class"<<endl;};
	
	void sayOhayo(){
		cout << "Ohayo!" << endl;
	}
	~Father(){cout<<"father killed"<<endl;}; 


	
};

class Daughter : public Mother, Father{
private:
	int age{20};
public:
	Daughter(){
		cout << "daughter class" << endl;
	};
	void saybye(){
		cout << "Bye!"<<endl;
	}
	~Daughter(){cout << "daughter killed" << endl;};
};

class GrandDaughter : public Daughter{
public:
	GrandDaughter (){cout << "granddaughter class" << endl;};
	void burp(){
		cout << "Burp"<< endl;
	}
	~GrandDaughter (){cout << "granddaughter killed" << endl;};
};
int main (){
	cout << "Hello world" << endl;
	
	Daughter Gertrude;
	Gertrude.sayHi();
	
	GrandDaughter b;
	
	b.burp();
	
	
	return 0;
	}