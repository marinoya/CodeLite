#include <iostream>
using namespace std;

int main() {
    
    
    
    
    cout << "Please enter the length of the room: " << endl;
    int roomLength {0};
    cin >> roomLength;
         
    cout << "Please enter the width of the room: " << endl;
    int roomWidth {0};
    cin >> roomWidth;
    
    cout << "The area of the room is: " << roomLength * roomWidth << " square meters." << endl;
    return 0;
}