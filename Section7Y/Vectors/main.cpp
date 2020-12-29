#include <iostream>
#include <vector>
using namespace std;
using namespace std;


int main() {
    
   
 
 
//***************************VECTOR*****************************


//vector <char> vowels (5);
vector <char> vowels {'a','e','i','o','u'};
//vector <int> testScores (10);
vector <int> testScores {100, 98, 89, 85, 93};
vector <double> highTemp (365 , 80.0);

//**************ACCESSING AND MODIFYING VECTOR ELEMENTS*******

//vectorName [element_index] - no bounds checking

vector <int> testScores2 {100,98,78,98,99};
testScores2.at(2) = 88;
cout<<"First score at index 0: "<<testScores2.at(0) <<endl;
cout<<"second score at index 1: "<<testScores2.at(1) <<endl;
cout<<"third score at index 2: "<<testScores2.at(2) <<endl;
//cout<<"sixt score at index 5: "<<testScores2.at(5) <<endl;
testScores2.push_back(87);
testScores2.push_back(99);
cout<<"sixt score at index 5: "<<testScores2.at(5) <<endl;

//vector <char> vowels2; //empty
//vector <char> vowels2 (5) // 5 initialized to 0
vector <char> vowels2 {'a','e','o','i','u'};

//vector <int> testSco (3) ; // 3 elements initialized as 0
//vector <int> testSco (3,100); // 3 elements all initialized as 100
vector <int> testSco {100, 98,99};
cout<< "\nTest scores using array syntax:" << endl;
cout<<testSco[0]<<endl;
cout<<testSco[1]<<endl;
cout<<testSco[2]<<endl;

cout<<"\nTest scores uing vector syntax:"<<endl;
cout<<testSco.at(0)<<endl;
cout<<testSco.at(1)<<endl;
cout<<testSco.at(2)<<endl;
cout<<"\nThere are " <<testSco.size()<<" sores in the vector"<<endl;



    return 0;

    
}