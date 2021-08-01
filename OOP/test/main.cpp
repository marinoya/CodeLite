#include <iostream>
#include <vector>
using namespace std;
#include <unordered_map>
#include <string>

int main (){
	
	std::vector<int> values = {1, 2, 2323, 4, 5};
	
	/*for (int i =0; i< values.size(); ++i){
		cout << values[i]<< endl;}
	
	
	for (int value : values)
	{
		cout << value<< endl;
	}
	
	for (vector<int>::iterator it = values.begin(); it != values.end(); ++it)
	{
		cout << *it << endl;
	}
	*/
	
	
	unordered_map<string, int> map;
	map["Yasen"] = 5;
	map["Silviya"] = 4;
	map["Elisaveta"] = 1;
	
	for (unordered_map<string, int>::const_iterator it = map.begin(); it !=map.end(); ++it)
	{
		auto& key = it->first;
		auto& vlue = it->second;
		cout << key << " is " << vlue<< endl;
	}
	
	
	cout << endl;cout << endl;cout << endl;
	for (auto kv :map)
	{
		auto& key = kv.first;
		auto& vlue = kv.second;
		cout << key << " is " << vlue<< endl;
	}
	
	
	cout << "Hello world" << endl;
	return 0;
	}