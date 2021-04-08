#include <iostream>
using namespace std;

int main (){
//	cout << "Hello world" << endl;
//	
//	int number {0};
//	
//	do {
//		cout << "Enter an integer between 1 and 5: ";
//		cin >> number;
//	} while (number <=1 || number >=5);
//	
//	cout <<"Thenks!"<< endl;
	
	char selection {};
	do
	{
		cout << "\n----------------------------"<< endl;
		cout << "1. Do this"<< endl;
		cout << "2. Do that"<< endl;
		cout << "3. Do something else"<< endl;
		cout << "Q. Quit"<< endl;
		cout << "Enter your selection"<< endl;
		cin >>  selection;
		switch (selection){
			case '1': cout<<"You shose 1 - doing this"<< endl; break;
			case '2': cout<<"You shose 2 - doing that"<< endl; break;
			case '3': cout<<"You shose 3 - doing the other thing"<< endl; break;
			case 'q':
			case 'Q': cout<<"Goodbye!"<< endl;break;
			default : cout<<"Invalid choice"<< endl;
		}
		
		
	}while (selection != 'q' && selection != 'Q');
	
	
	return 0;
	}