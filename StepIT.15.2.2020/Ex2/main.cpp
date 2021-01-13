#include <iostream>
using namespace std;

int main() {
    cout << "enter 3 digit number" << endl;
	
	
	int f {0};
	
	cin >> f;
	
	cout<<"\nYour number is "<<f<<endl;
	
	int f1 = (f%10);
	
	cout <<"\nThe last digit is: "<<f1<<endl;
	
	f=f/10;
	
	cout <<"\nYour number witout the last digit is: "<<f<<endl;
    return 0;
}
