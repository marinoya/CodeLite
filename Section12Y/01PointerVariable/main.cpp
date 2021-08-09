#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main (){
	
	int *int_ptr {};
	double* double_ptr {nullptr};
	char *char_ptr ;
	string* string_ptr {nullptr};
	
	
	cout << int_ptr << endl;
	cout << double_ptr << endl;
	//cout << char_ptr << endl; //errors out
	
	cout<< endl;
	
	int num {10};
	
	cout << "The value of num is: "<< num <<endl;
	cout << "The size of num is: "<< sizeof num <<endl;
	cout << "The address of num is: "<< &num <<endl;
	
	cout<< endl;
	
	int *p;
	
	cout << "The value of p is: "<< p <<endl;
	cout << "The address of p is: "<< &p <<endl;
	cout << "The size of p is: "<< sizeof p <<endl;
	p = nullptr;
	cout << "The value of p is: "<< p <<endl;
	
	cout<< endl;
	
	int *p1 {nullptr};
	double *p2 {nullptr};
	unsigned long long *p3 {nullptr};
	vector<string> *p4 {nullptr};
	string *p5 {nullptr};
	
	cout << "The size of the ps' is: "<< sizeof p1<< sizeof p2<< sizeof p3<< sizeof p4<< sizeof p5 <<endl;
	
	cout<< endl;
	
	int score{10};
	double high_temp{100.7};
	
	int* score_ptr {nullptr};
	
	score_ptr = &score;
	
	cout << "The value of score is: "<< score <<endl;
	cout << "The address of score is: "<< &score <<endl;
	cout << "The value of score_ptr is: "<< score_ptr <<endl;
	
	//score_ptr = &high_temp; // compiler error
	return 0;
	}