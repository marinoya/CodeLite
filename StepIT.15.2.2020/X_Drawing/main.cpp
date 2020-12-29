#include <iostream>
using namespace std;

int main() {
    cout << "My Template2" << endl;
    
  /*  int n{0};
    cin >> n;
    if( n%0!=0){
        
        for (int y =n; y==0;y--){
            for(int x = n; x)   */
            
            int n;  
      
    // i denotes the number of rows 
    cout << "Enter the value of n \n"; 
    cin >> n; 
  
    // Print all rows one by one  
    for (int i = 1; i <= n; i++) { 
  
        // Print characters of current row 
        for (int j = 1; j <= n; j++)  
        { 
            // For i = 1, we print a '$' only in  
            // first and last columns 
            // For i = 2, we print a '$' only in  
            // second and second last columns 
            // In general, we print a '$' only in  
            // i-th and n+1-i th columns 
  
            if (j == i || j == (n + 1 - i)) 
                cout << "$";  
            else
                cout << " "; 
        } 
   
        // Print a newline before printing the 
        // next row.  
        cout << endl; 
        
        
    }
    return 0;
}