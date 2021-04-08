#include <iostream>
using namespace std;

int main (){
	cout << "Hello world" << endl;
	
	int num {};
	
	const int min = 10;
	const int max = 100;
	cout<< "please enter a numner to check: " ;
	cin >> num;
	
	
	if(num >= 10)
	{
		cout << "\n your number is larger than or equal to 10"<<endl;
		if (num <= 100)
		{
			cout << "\n your number is smaller than or equal to 100"<<endl;
			if (num >=10 && num <=100)
			{
				cout << "\n your number is between 10 and 100"<<endl;
				if (num == 10 || num == 100)
				{
					cout << "\n your number is either 10 or 100"<<endl;
				}
			}
		}
	}
	
	
	
	
	return 0;
	}