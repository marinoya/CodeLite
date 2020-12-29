#include <iostream>
using namespace std;

int main() {
    cout << "************Arrays - Declaring, initializing, etc..." << endl;
    
    int myFirstArray [8] {1,2,3,4};
    cout <<"\nthe value at array position 4 is "<< myFirstArray [3] <<endl;
    cout << "please enter a value for array position 6" << endl;
    cin >> myFirstArray [5];
    cout << "please enter a position in the array for which you'd like to know the value" << endl;
    int pos {0};
    cin >> pos;
    cout << "You've entered " << pos <<endl;
    pos--;
    cout << myFirstArray[pos];
    cout<<"\n\n****************VOWELS************************"<< endl;
    char vowels [] {'a','e','i','o','u'};
    cout<<"The size of the array containing vowles is "<<sizeof(vowels)<<endl;
    cout<<"The last vowel is: "<<vowels[(sizeof(vowels)-1)]<<endl;
    for(int i=0;i<sizeof(vowels);i++){
        cout<<"The vowel at position "<< i+1<<" is " << vowels[i]<<endl;}
    //cin >> vowels[5]; //OUT OF BOUNDS
    

//
//cout << (unsigned)(1 << 31) << endl;   


int array1 [5];
for(int i=0; i<5; i++){
    cout << "The value at index " << i << " is " << array1[i]<<endl;}

 
    return 0;
}