#include <iostream>
#include <vector>
using namespace std;

void printNumbers (const vector <int>& collection);
void addNumber (vector <int>& collection);
void printMean (const vector <int>& collection);
void printSmallest( const vector<int>& collection);
void printLargest(const vector <int>& collection);



int main (){
	cout << "Hello world" << endl;
		
	int result {};
	
	vector <int> vec = {2,4,6,8};
	
	if (vec.size() == 0 || vec.size() == 1)
	{
		return 0;
	}
		
	for (unsigned int i {0}; i < vec.size() ; ++i )
	{
		for (unsigned int j = i+1; j <= vec.size() ; ++j){
			int pair = vec [i] * vec [j];
			result += pair;
		}
	}
	cout << result;    


	vector<int> collection {};
	
	char selection {0};
	
	do 
	{
		cout << "\nPlease make a selection"<< endl;
		cout << "=========================="<< endl;
		cout << "P - Print numbers"<< endl;
		cout << "A - Add a number "<< endl;
		cout << "M - Display the mean of the numbers"<< endl;
		cout << "S - Display the smallest number"<< endl;
		cout << "L - Display the largest number"<< endl;
		cout << "Q - Quit"<< endl;
		cout << "\n\nPlease enter selection :";
		
		cin >> selection;
		switch (selection)
		{
			case 'p':
			case 'P': printNumbers(collection); break;
			case 'a':
			case 'A': addNumber(collection); break;
			case 'm':
			case 'M': printMean(collection); break;
			case 's':
			case 'S': printSmallest(collection); break;
			case 'l':
			case 'L': printLargest(collection); break;
			case 'q':
			case 'Q': cout << "\n!"<< endl; break;
			default : cout << "\nUnknown selection, please try again" << endl;
		}
	}
	while (selection != 'q' && selection != 'Q');
	
	
	
	
	
	
	return 0;
	}
	
	void printNumbers (const vector<int>& collection)
	{
		if (collection.size() == 0)
		{
			cout << "\n[] - the list is empty" << endl;
		}
		else
		{
			cout << "\n[ ";
			for (unsigned int i {0}; i < collection.size() ; ++i)
			{
				cout << collection[i] << " " ;
			}
			cout << "]" << endl;
		}
	}
	void addNumber (vector<int>& collection)
	{
		cout << "\nPlease enter number: ";
		int numToAdd {0};
		cin >> numToAdd;
		collection.push_back(numToAdd);
		cout <<"\n\n" << numToAdd << " was added to the collection"<< endl;
	}
	
	
	void printMean (const vector<int>& collection)
	{
		if (collection.size() != 0)
		{
			double mean {0};
			for (auto item : collection){
			//( int i {0}; i < collection.size(); ++i){
				mean += item;
				//mean += collection[i];
				//cout << mean << " ";
			}
			cout << "\nThe mean is: " << (mean / collection.size()) << endl;
		}else{
			cout << "\n[] - the list is empty" << endl;
			}
	}
	
	void printSmallest( const vector<int>& collection)
	{
		if (collection.size() != 0)
		{
			int smallest = collection[0];
			for (unsigned int i {0}; i<collection.size(); ++i)
			{
				if (collection[i]<smallest)
				{
					smallest = collection[i];
				}
			}
			cout <<"\nThe smallest is: " << smallest << endl;
		}else{
			cout << "\n[] - the list is empty" << endl;
		}
	}
	
	void printLargest(const vector <int>& collection)
	{
		if (collection.size() != 0)
		{
			int largest = collection[0];
			for (unsigned int i {0}; i<collection.size(); ++i)
			{
				if (collection[i]>largest)
				{
					largest = collection[i];
				}
			}
			cout << "\nThe largest is :" << largest << endl;
		}else{
			cout << "\n[] - the list is empty" << endl;
			}
	}
	
	
	
	
//	int a = 5;
//	
//	int& referenceA = a;
	