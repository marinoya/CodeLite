#include <iostream>
using namespace std;

void param_test (int formal)
{
	cout <<"formal is: "<< formal << endl;
	formal = 100;
	cout <<"formal is: "<< formal << endl;
}

int main (){
	int actual = 50;
	cout <<"actual is: "<< actual << endl;
	param_test(actual);
	cout <<"actual is: "<< actual << endl;
	return 0;
	}