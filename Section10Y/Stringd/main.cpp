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
//	
//	cout << "first thing" << endl;
//	cout << firstName << endl;
//	cout << "\nsecond thing" << endl;
//	for(auto i : firstName)
//	{
//		cout << i;
//	}
//	cout << endl;
//	
//	cout << "Please enter your first name: ";
//	cin >> firstName;
//	
//	cout << "Please enter your last name: ";
//	cin >> lastName;
//	
//	cout << "---------------------------------" << endl;
//	
//	cout << "hello " << firstName << ", your first name is "<< strlen(firstName)<< " characters long"<< endl; ///strlen returns a type of size_t - unsigned integer or long
//	
//	cout << "and your last name " << lastName << " has "<< strlen(lastName)<< " characters" << endl;
//	
//	strcpy(fullName, firstName);  // copy firstName into fullName  
//	strcat(fullName, " ");   	  // concatenate fullName and a space
//	strcat(fullName, lastName);	  // concatenate lastName to the end of fullName
//	
//	cout << "Your full name is: " << fullName<<  endl;
	
//	cout << "----------------------------------------------" << endl;
//	
//	cout << "enter your full name: ";
//	cin >> fullName;
//	
//	cout << "\n\nYour full name is :" << fullName << endl;
	
	cout << "----------------------------------------------" << endl;
	
	cout << "enter your full name: ";
	cin.getline(fullName, 50);
	
	cout << "\n\nYour full name is :" << fullName << endl;
	cout << "----------------------------------------------" << endl;
	
	strcpy(temp, fullName);
	if (strcmp(temp, fullName) == 0)
	{
		cout << temp << " and " << fullName << " are the same!" << endl;
	}else {
		cout << temp << " and " << fullName << " are different!" << endl;
	}
	cout << "----------------------------------------------" << endl;
	
	for (size_t i {0} ; i < strlen(fullName) ; ++i )
	{
		if(isalpha(fullName[i]))
		{
			fullName[i] = toupper(fullName[i]);
		}
	}
	cout << " your full name is :" << fullName << endl;
	
	cout << "----------------------------------------------" << endl;
	
	if (strcmp(temp, fullName) == 0)
	{
		cout << temp << " and " << fullName << " are the same!" << endl;char []asdasdasdasd
	}else {
		cout << temp << " and " << fullName << " are different!" << endl;
	}
	cout << "----------------------------------------------" << endl;
	cout << "Result of comparing " << temp << " and " << fullName << " :" << strcmp(temp, fullName) << endl;
	cout << "Result of comparing " << fullName << " and " << temp << " :" << strcmp(fullName, temp ) << endl;
	
	
	
	
	
	
	
	return 0;
	}