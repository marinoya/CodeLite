#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print(int = 100);
void print(double = 123.4);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num)
{
	cout << "Printing int: " << num << endl;
}

void print(double num)
{
	cout << "Printing double: " << num << endl;
}

void print(string s)
{
	cout << "Printing string: " << s << endl;
}

void print(string s, string t)
{
	cout << "Printing strings: " << s + " " + t << endl;
}

void print(vector<string> v)
{
	cout << "Printing vector of strings: ";
	for ( string s : v)
	{
		cout << s + " ";
	}
	cout << endl;
}

int main (){
	print();
	print (9);
	print('A'); //Character is always promoted to int - 65 in ASCII
	print (99.45);
	print (123.3F);
	print ("Joseph");//C-style string is converted to a C++string object (literal to object)
	string s = {"C-style tring"};
	print (s);
	print ("Hannah", "Conclin");
	
	vector<string> v = {"Hannah","and","Joseph","married"};
	print (v);
	
	
	return 0;
	}