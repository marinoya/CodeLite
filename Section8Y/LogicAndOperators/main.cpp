#include <iostream>
using namespace std;

int main (){
	cout << boolalpha;
//	const int upper = 20;
//	const int lower = 10;
//	bool isBetween {false};
//	int num {0};
//	cout << "\nPlease enter a number between upper and lowe bound."<< endl;
//	cin >> num;\
//	isBetween = num < upper && num > lower;
//	cout << num <<" Is between "<< lower<< " and "<< upper<< ": "<< isBetween<< endl;
	
	
	
	int age {0};
	bool parental_consent {0};
	bool ssn {0};
	bool accidents {0};
	
	cout << "\nEnter age: ";
	cin >> age;
	cout << "\nEnter parental consent: ";
	cin >> parental_consent;
	cout << "\nEnter ssn: ";
	cin >> ssn;
	cout << "\nEnter accidnets: ";
	cin >> accidents;
	
	cout << "\n\n\nAge is: "<<age<<"\nParentalConsent is: "<<parental_consent<<"\nssn is: "<< ssn<<"\nAccidnets is: "<< accidents<< endl;
	
    if (ssn && !accidents && (age >= 18 || (age >15 && parental_consent))  )
        cout << "\nYes, you can work.";
		
		cout<< endl;
    
	if ( (age >= 18 || (age >15 && parental_consent)) && ssn && !accidents )//WRITE ALL YOUR CODE WITHIN THE PARENTHESES
        cout << "Yes, you can work2.";
		cout<< endl;
		
		
		
	return 0;
	}