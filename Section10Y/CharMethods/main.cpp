#include <iostream>
#include <cstring>
#include <cctype>
#include <stdio.h>
#include <string.h>

using namespace std;

int main (){
	
	cout << std::boolalpha;
	cout << endl;
	char a {'F'};
	bool b {1};
	cout << b << endl;
	
	cout << endl;
	cout << isalpha(a)<< endl;
	cout << endl;
	cout<< islower(a)<< endl;
	cout << endl;
	
	cout << tolower(a) << endl;
	cout << isdigit(b) << endl;
	
	
	//cout << "Hello world" << endl;
	
	
	
	char myName[8] {"Yasen"};
	
	for (auto i : myName)
	{
		cout << i;
	}
	
	cout << endl;
	
	myName[5] = 'y';
	
	for (auto i : myName)
	{
		cout << i;
	}
	
		cout << endl;
		
		
		char yourName[8];
		
		for (auto i : yourName)
	{
		cout << i;
	}
	
	
	strcpy(yourName, "Frank");
	
	
	for (auto i : yourName)
	{
		cout << i;
	}
	
	
	return 0;
	}