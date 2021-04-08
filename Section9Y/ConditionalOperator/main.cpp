#include <iostream>
using namespace std;

int main (){
	cout << "Hello world" << endl;
	
	int num{};
	
	cout << "Enter an integer: ";
	cin >> num;
	
	if (num %2 == 0)
	{
		cout << "the number " << num<<" is even"<< endl;
	}else{
		cout << "the number " << num<<" is odd"<< endl;
	}
			
	cout << num << " is "<< ((num %2 ==0) ? "even" : "odd") << endl;
			
	
	int num1{}, num2{};
	cout << "please enter two integers separated by a space: ";
	cin >> num1 >> num2;
	
	if (num1!= num2)
	{
		cout << "Larger: "<< ((num1>num2)? num1 : num2) << endl;
		cout << "Smaller: "<< ((num1<num2)? num1 : num2) << endl;
	}else{
		cout<<"the numbers are the same!"<< endl;
	}
	
	
	return 0;
	}
	