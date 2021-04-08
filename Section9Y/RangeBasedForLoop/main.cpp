#include <iostream>
#include <vector>
# include <iomanip>
using namespace std;

int main (){
	cout << "Hello world" << endl;
	
//	int scores [] {100,90,97};
//	
//	
//	for (int score : scores)
//	{
//		cout<< score << endl;
//	}

//	int scores [] {100,90,97};
//	
//	
//	for (auto score : scores)
//	{
//		cout<< score << endl;
//	}
//	
//
//	vector<double> temps {12.5,17.8,16.5,18.3};
//	
//	double averageTemp;
//	
//	double runningSum;
//	
//	for (auto temp : temps)
//	{
//		runningSum += temp;
//	}
//	
//	averageTemp = runningSum / temps.size();
	
	
//	double averageTemp{};
//	double runningTemp{};
//	int count{};
//	
//	for (auto temp : {17.5,15.5,16.5,14.5})
//	{
//		runningTemp+=temp;
//		++count;
//		cout << runningTemp << " & " << count<< endl;
//	}
//	
//	averageTemp =runningTemp/count;
//	cout << averageTemp;
//	
	
//	for (auto c : "Frank")
//	{
//		cout << c << endl;
//	}
	
	
//	int scores [] {10,20,30};
//	
//	for (int score : scores)
//	{
//		cout<< score << endl;
//	}
	
//	vector <double> temps {89.6,87.2,95.4,25.6};
//	double averageTemp{};
//	double total{};
//	
//	for (auto temp : temps)
//	{
//		total += temp;
//	}
//	
//	if (temps.size()!=0)
//	{
//	 averageTemp = total/temps.size();
//	}
//	cout<<fixed<<setprecision(1);
//	cout << "Average temp is: " << averageTemp<< endl;
	
	
//	for (auto val: {1,2,3,4,5})
//		cout<<val<<endl;
	
	
//	for ( auto c : "This is a test")
//	{
//		if (c!=' ')
//			cout << c;
//	}
	
	for ( auto c : "This is a test")
	{
		if (c == ' ')
		{
			cout<< "\t";
		}else{
			cout << c;
		}
	}
	
	
	
	int arr [] {3,5,9};
	
	cout << arr.size<< endl;
	
	
	
	
	return 0;
	}