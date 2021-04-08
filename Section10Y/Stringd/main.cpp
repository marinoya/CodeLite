#include <iostream>
#include <cstring>
//#include <cctype>
using namespace std;

int main (){
	//cout << "Hello world" << endl;
	
	char firstName[20] {};
	char lastName[20] {};
	char fullName[50] {};
	char temp[50] {};
	
	cout << "first thing" << endl;
	cout << firstName << endl;
	cout << "\nsecond thing" << endl;
	for(auto i : firstName)
	{
		cout << i;
	}
	cout << endl;
	
	cout << "Please enter your first name: ";
	cin >> firstName;
	
	cout << "Please enter your last name: ";
	cin >> lastName;
	
	cout << "---------------------------------" << endl;
	
	cout << "hello " << firstName << ", your first name is "<< strlen(firstName)<< " characters long"<< endl;
	cout << "and your last name " << lastName << " has "<< strlen(lastName)<< " characters" << endl;
	
	strcpy(fullName, firstName);  // copy firstName into fullName  
	strcat(fullName, " ");   	  // concatenate fullName and a space
	strcat(fullName, lastName);	  // concatenate lastName to the end of fullName
	
	cout << "Your full name is: " << fullName<<  endl;
	
	cout "----------------------------------------------"<< endl;
	
	
	
	
	
	
	
	
	
	return 0;
	}