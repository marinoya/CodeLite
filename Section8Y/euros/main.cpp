#include <iostream>
using namespace std;

int main() {
    cout << "My Template2" << endl;
    
    const double USDperEUR {1.22};
    cout << "Welcpm to the EUR to USD convertor" << endl;
    cout << "Enter the value n euros: " ;
    double euros {0.0};
    double dollars {0.0};
    
    cin >>euros;
    dollars = euros *USDperEUR;
    
    cout << euros <<" Euros is equivalent to "<<dollars<<" Dollars"<<endl;
    
    return 0;
}