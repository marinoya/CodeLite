#include <string>
#include <algorithm>
using namespace std;

string disemvowel(const string& str) 
{
	string result;
	
	copy_if(str.begin(), str.end(), result.begin(), [](char a){return a!='a' && a!='e' && a!='i' && a!='o' ;})
  
  return result;
}



