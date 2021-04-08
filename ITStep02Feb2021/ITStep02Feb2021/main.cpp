#include <iostream>
using namespace std;
//default arguments for a function
int f(int a=0, int b=11, int c=0);

int perim (int a = 0, int b = 0 , int c = 0 , int d = 0);



int main (){
	cout << "Hello world" << endl;
	return 0;
	}
	
	
	// default args are only applied if the function is called without putting them in
	int f(int a, int b, int c)
	{
		
		return a+b+c;
	}
	
	int perim (int a, int b, int c, int d)
	{
		if (a!=0&&b==0&&c==0&&d==0)
		{
			return a*4;
		}else if (a!=0&&b!=0&&c==0&&d==0)
		{
			return a*2 + b*2;
		}else if (a!=0&&b!=0&&c!=0&&d==0)
		{
			return a+b+c;
		}else
		{
			return a+b+c+d;
		}
	}