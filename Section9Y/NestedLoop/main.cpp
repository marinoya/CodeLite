#include <iostream>
using namespace std;
#include <vector>
int main (){
	cout << "Hello world" << endl;
	
	
	vector<vector<int>> vector2d
	{
		{1,2,3},
		{10,20,30,40},
		{100,200,300,400,500}
	};
	
	for(auto vec : vector2d)
	{
		for(auto val: vec)
		{
			cout << val << " ";
		}
		cout << endl;
	}
	
	
	return 0;
	}