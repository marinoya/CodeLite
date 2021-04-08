#include <iostream>
using namespace std;
#include <vector>

int main (){
	cout << "Hello world" << endl;
	
	int num {};
	vector<int> data {};
	cout << "How many data items do you have? :";
	cin >> num;
	
	//for ( int i = num; num <=0 ; --num)
	for ( int i {1}; i<= num; ++i)
	{
		int dataItem {};
		cout << "Enter data item " << i << endl;
		cin >> dataItem;
		data.push_back(dataItem);		
	}
	
	for (auto val : data)
	{
		cout << val << endl;
	}
	
	
	
	
	return 0;
	}