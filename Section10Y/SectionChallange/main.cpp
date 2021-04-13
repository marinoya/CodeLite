#include <iostream>
using namespace std;

int main (){
	cout << "Hello world" << endl;
	
	string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
	string message {};
	cout << "Please enter your message :";
	getline(cin, message);
	
	for (char c : message)
	{
		if (alphabet.find(c)!= string::npos)
		{
			size_t pos = alphabet.find(c);
			message[message.find(c)] = key[pos];
		}
	}
	cout << endl;
	cout << endl;
	cout << endl;
	
	cout << message << endl;
	
	
	
	
	
	
	return 0;
	}