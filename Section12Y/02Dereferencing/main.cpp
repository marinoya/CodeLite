#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main (){
	
	int score {10};
	int* score_ptr {&score};
	
	
	cout << *score_ptr << endl;
	
	*score_ptr = 200;
	
	cout << *score_ptr << endl;
	cout << score << endl;
	
	cout << endl;
	
	double high_temp {100.7};
	double low_temp {37.4};
	double* temp_ptr{&high_temp};
	cout<<*temp_ptr<<endl;
	temp_ptr = &low_temp;
	cout<<*temp_ptr<<endl;
	
	cout << endl;
	
	string name {"Frank"};
	string* string_ptr {&name};
	cout << *string_ptr<<endl;
	name = "James";
	cout << *string_ptr<<endl;
	
	cout << endl;
	
	vector<string> stooges {"Larry","Moe","Curly"};
	vector<string>* vector_ptr{nullptr};
	
	vector_ptr =&stooges;
	
	cout<< "First stooge: "<<(*vector_ptr).at(0) << endl;
	
	cout<<"stooges: ";
	for(auto stooge :*vector_ptr)
	{
		cout<<stooge<<" ";
	}cout << endl;
	
	cout << endl;
	
	cout << 'F' -'C';
	
	
	
	return 0;
	}