#include <iostream>
#include <cstdlib> //required for rand()
#include <ctime>	// required for time()
#include <cmath>
using namespace std;

int main (){
	
	int rn {};
	size_t count {10};	//number of random numbers to generate
	int min {1};		//lower bound (inclusive)
	int max {6};		//upper bound (inclusive)
	
	//seed the random number generator
	//if you dont seed you'll get the same random numbers every time
	
	cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
	srand(time(nullptr));
	
	for (size_t i{1}; i<=count; ++i)
	{
		rn = ( rand() % max ) + min;
		cout << rn << endl;
	}
	
	cout << endl;
	cout << endl;
	cout << endl;


    
    double bill_total {102.78};
    int number_of_guests {5};
    
    //DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    double individual_bill = bill_total/number_of_guests;
    cout << "double individual_bill = bill_total/number_of_guests; = " << individual_bill << "\n" << endl;
    int individual_bill_1 = floor(individual_bill);
	cout << "int individual_bill_1 = floor(individual_bill); = " << individual_bill_1 << "\n" << endl;
	int individual_bill_2 = round(individual_bill);
	cout << "int individual_bill_2 = round(individual_bill); = " << individual_bill_2 << "\n" << endl;
    double individual_bill_3 = ceil(individual_bill*100);
	cout << "double individual_bill_3 = ceil(individual_bill*100); = " << individual_bill_3 << "\n" << endl;
    double individual_bill_4 = ceil(individual_bill*100)/100;
	cout << "double individual_bill_4 = ceil(individual_bill*100)/100; = " << individual_bill_4 << "\n" << endl;


    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout << "The individual bill at location 1 will be $" << individual_bill_1 << "\n" << endl;
	cout << "The individual bill at location 2 will be $" << individual_bill_2 <<"\n" << endl;
	cout << "The individual bill at location 3 will be $" << individual_bill_3<< "\n" << endl;;

	
	
	//cout << "Hello world" << endl;
	return 0;
	}