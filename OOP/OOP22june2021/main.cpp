#include <iostream>
using namespace std;

//Templates
int sum(int a, int b){
		int x = a+b;
		return x;
	}
	
double sum(double a, double b){
	double x = a+b;
	return x;
}
//Function templates - instad of overloading for eatch type allows to use placeholder types(template type parameters)
template <class T>
T sum(T a, T b){
	T x = a+b;
	return x;
	}

template <class T, class U>
T smaller (T a, U b){//int a, double b
	return(a<b?a:b);
	}

//Class template
template <class T>
class MyClass{
private:
	T first, second;
public:
	MyClass (T a, T b): first (a), second (b){}
	T bigger();
};

T MyClass <T>::bigger(){}

//template specialization - empty list and exception for char types
template < >
class MyClass <char> {
public: 
	MyClass(char x){
		cout << x<< "is a char!"<< endl;}
	};
	
	
int main (){
	cout << "Hello world" << endl;
	
	int a = 10;
	int b = 15;
	
	double c = 10.5;
	double d = 15.6;
	cout << sum (a,b)<< endl;
	cout << sum (c,d)<< endl;
	
	MyClass <int> obj(11,122);
	cout << obj.bigger();
	MyClass <double> obj1 (5.4);
	MyClass <char> obj2('f');
	
	//exception for ex 10/0
	//try, catch, throw
	try{
		int motherAge = 29;
		int sonAge = 38;
		if(sonAge > motherAge){
			throw 66;
		}}
		catch(int x){
			cout<<"wrong age avlues "<< x <<endl;
		}
	
	
	return 0;
	}