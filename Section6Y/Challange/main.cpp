#include <iostream>
using namespace std;

int main() {
    int smallRooms {0};
    int largeRooms {0};
    const double priceSmallRoom {25};
    const double priceLargeRoom {35};
    const double taxRate {0.06};
    cout << "Hello, welcome to Franks carpet cleaning service." << endl;
    cout << "How many SMALL rooms would you like to have cleaned? ";
    cin >> smallRooms;
    cout << "How many LARGE rooms would you like to have cleaned? ";
    cin >> largeRooms;
    cout << endl;
    cout << "Estimate for carpet cleaning services" 
         << endl;
    cout << "Number of SMALL rooms: " 
         << smallRooms 
         << endl;
    cout << "Number of LARGE rooms: " << largeRooms << endl;
    cout << "Price per SMALL room: " << priceSmallRoom << endl;
    cout << "Price per LARGE room: " << priceLargeRoom << endl;
    int cost = (smallRooms*priceSmallRoom)+(largeRooms*priceLargeRoom);
    cout << "Cost: " << cost << endl;
    cout << "Tax: " << cost*taxRate << endl;
    cout << "============================================" << endl;
    cout << "Total estimate: " << (cost*taxRate) + cost << endl;
    return 0;
}