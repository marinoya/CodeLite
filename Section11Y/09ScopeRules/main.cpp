#include <iostream>
using namespace std;
int num {300}; //global variable
void local_example();
void global_example();
void static_local_example();

void global_example(){
	cout<< "\n\nGlobal num is: "<< num << " fpr global_example - start"<<endl;
	num*=2;
	cout<< "Global num is: "<< num << " fpr global_example - end"<<endl;
}

void local_example(int x){
	int num {1000};//local to local example
	cout <<"\n\nLocal num is: "<< num << " in local ezample - start"<< endl;
	num = x;
	cout <<"Local num is: "<< num << " in local example - end"<< endl;
}

void static_local_example(){
	static int num {5000};
	cout <<"\nLocal static num is: "<<num<<" in static_local_example - start"<<endl;
	num+=1000;
	cout <<"Local static num is: "<<num<<" in static_local_example - end"<<endl;
}


int main (){
	
	int num {100};
	int num1 {500};
	
	cout << "Local num is: " <<num<<" in main"<< endl;
	
	{//creates a new level of scope
	int num {200};//local to this inner block
	//int num1 {200098};//local to this inner block
	cout << "Local num is: " <<num<<" in inner block in main"<< endl;
	cout << "Inner block in main can see out - num1 is: "<< num1 << endl;
	
	}
	cout << "Local num is: " <<num<<" in main"<< endl;
	
	local_example(10);
	local_example(20);
	
	global_example();
	global_example();
	global_example();
	
	static_local_example();
	static_local_example();
	static_local_example();
	
	return 0;
	}