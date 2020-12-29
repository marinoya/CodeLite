#include <iostream>
using namespace std;

int main() {
    cout<<"Hello Welcome to franks room cleaning service"<<endl;
    cout << "\nHello, how many rooms do you want to have cleaned?" << endl;
    int numberOfRooms {0};
    cin >> numberOfRooms;
    const double pricePerRoom {320};
    //cout << "You have chosen to have "<< numberOfRooms << " rooms cleaned, which will cost $" << numberOfRooms*pricePerRoom <<endl;
    const double taxRate {0.06};
    const int estimateExpiry {30}; //days
    cout << "\nEstimate for carpet cleaning service:"<<endl;
    cout << "Number of rooms: "<<numberOfRooms<<endl;
    cout << "Price per room: $" << pricePerRoom <<endl;
    cout << "Cost: $"<< pricePerRoom*numberOfRooms<<endl;
    cout << "Tax: $"<< pricePerRoom*numberOfRooms*taxRate<<endl;
    cout<< "=========================================="<<endl;
    cout<<"Total Estimate: $"<< (pricePerRoom*numberOfRooms)+(pricePerRoom*numberOfRooms*taxRate)<<endl;
    cout<<"This estimate is valid for "<< estimateExpiry <<" days"<<endl;
    return 0;
}