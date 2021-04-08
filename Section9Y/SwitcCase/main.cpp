#include <iostream>
using namespace std;

int main (){
	cout << "Hello world" << endl;
	
	enum Colour 
	{
		red, blue , green
	};
	
	Colour screenColour {blue};
	
	
	
	switch (screenColour)
	{
		case red: cout<<"red"<< endl; break;
		case blue: cout<<"blue"<< endl; break;
		case green: cout<<"green"<< endl; break;
		
	}
	
	char letterGrade{};
	
	cout << "Please enter the letter grade you expect on the exam: ";
	cin >> letterGrade;
	cout << endl;
	
	switch (letterGrade)
	{
		case 'a':
		case 'A': cout<< "You need a 90 or above, study hard!"<< endl; break;
		case 'b':
		case 'B': cout<< "You need 80-89 for a B, go study!"<< endl; break;
		case 'c':
		case 'C': cout<< "You need 70-79 for an averga grade."<< endl; break;
		case 'd':
		case 'D': cout<< "Hmm, you should strive for a bettter grade. All you need is 60-69"<< endl; break;
		case 'f':
		case 'F': 
		{
			char confirm {};
			cout << "Are you sure? (Y/N)";
			cin >> confirm;
			if (confirm=='y' || confirm =='Y')
			{
				cout<< "okay, I guess you didnt study ... " << endl;
			}else if (confirm =='n'||confirm=='N')
			{
				cout <<"Good - go study!"<< endl;
				
			}else
			{
				cout << "Illegal choice"<< endl;
			}
			break;
		}
		
		
		
		
		
		default: cout << "sorry thats not a valid grade"<< endl;
	}
	
	
	
	
	
	
	return 0;
	}