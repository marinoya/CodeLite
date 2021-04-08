#include <iostream>
using namespace std;

int main (){
	cout << "Hello world" << endl;
	
//	int num {};
//	
//	cout << "Enter a positive integer - start the countdown :";
//	cin >> num;
//	
//	while (num >0)
//	{
//		cout << num<< endl;
//		--num;
//	}
//	cout << "Blastoff!" << endl;
//	
	
//	int i {1};
//	while (num >=i)
//	{
//		cout<< i << endl;
//		++i;
//	}
	
//	while (num <=0)
//	{
//		cout << "Enter a positive integer - start the countdown :";
//		cin >> num;
//	}
//	cout << "Your number is " << num<< endl;
	
	
	bool done {false};
	 int num {0};
	
	while (!done)
	{
		cout << "enter an integer between 1 and 5"<< endl;
		cin >> num;
		if (num <1 || num > 5)
		{
			cout<< " Out of range, try again" << endl;
		}else {
			cout << "thanks" << endl;
			done = 1;
		}
	}
	
	return 0;
	}