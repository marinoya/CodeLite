#include <iostream>
using namespace std; 
/*there is another way to do that - by defining strictly the names we want to use from a specific namespace
 *using std::cin;
 *using std::cout;
 *using std::endl;*/
int main(){
    int fav_num;
    cout<<"What is your fav number?\nWrite your fav number between 1 and 100:" << endl;
    cin>> fav_num;
    cout<<"Amazing! That is my fav number too!\nNo really!!, " <<fav_num<<" is my fav number!"<<endl;
    
    return 0;
}