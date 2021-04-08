#include <iostream>
using namespace std;

int main (){
	int amount{}, dollars{}, quarters{}, dimes{}, nickels{};
	
	const int dollarValue {100};
	const int quarterValue {25};
	const int dimeValue {10};
	const int nickelValue {5};
	cout << "Enter amount in cents : ";
	cin >> amount;
	
	//SOLUION WIThOUT USING MODULO OPERATOR (%)
	
//	dollars = amount/dollarValue;
//	cout << "\nNumber of dollars is: "<<dollars<< endl;
//	amount-=(dollars*dollarValue);
//	cout << "amount minus dollars is: "<< amount<< endl;
//	quarters = amount/quarterValue;
//	cout << "\nNumber of quarters is: "<<quarters<< endl;
//	amount-=(quarters*quarterValue);
//	cout << "amount minus quarters is: "<< amount<< endl;
//	dimes = amount/dimeValue;
//	cout << "\nNumber of dimes is: "<<dimes<< endl;
//	amount-=(dimes*dimeValue);
//	cout << "amount minus dimes is: "<< amount<< endl;
//	nickels = amount/nickelValue;
//	cout << "\nNumber of nickels is: "<<nickels << endl;
//	amount-=(nickels*nickelValue);
//	cout << "amount minus nickels is: "<< amount<< endl;
//	cout << "\nNumber of pennies is: "<<amount << endl;
	
	//SOLUION USING MODULO OPERATOR (%)
	
	cout << "number of dollars is : " << amount/dollarValue << endl;
	amount %= dollarValue;
	cout << "number of quarters is :  " << amount/quarterValue << endl;
	amount %= quarterValue;
	cout << "number of dimes is :  " << amount/dimeValue << endl;
	amount %= dimeValue;
	cout << "number of nickels is :  " << amount/nickelValue << endl;
	amount %= nickelValue;
	cout << "number of pennies is :  " << amount << endl;
	
	
	
	
	
	return 0;
	}