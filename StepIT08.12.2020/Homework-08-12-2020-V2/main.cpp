#include <iostream>
using namespace std;

int main() {
    
    int location = 1;
    //1-main, 2-animal, 3-birds, 0-exit
    char choice;
    
    do {
        switch (location) {
        case 1: {
            cout << "\n**********\nMain menu\n**********\n(please make your choice):\n1. Animals\n2. Birds\n3. Exit"<< endl;
            cin >> choice;
            switch (choice) {
            case '1':
                location = 2;
                break;
            case '2':
                location = 3;
                break;
            case '3':
                location = 0;
                break;
            default:
                cout << "\n\ninvalid choice" << endl;
            }
            break;
        }
        case 2: {
            cout<< "\n-----------\n1. Dog \n2. Cat \n3. Exit to Main Menu" << endl;
            cin>>choice;
            switch (choice) {
            case '1': cout << "\n\n**********\nThe dog barks\n**********" << endl; break;
            case '2': cout << "\n\n**********\nThe cat is afraid of dogs\n**********"<< endl; break;
            case '3': cout << "\n\n**********\nBack to main menu\n**********" << endl; location =1; break;
            default: cout << "\n\invalid choice"<< endl;
            }
            break;
        }
        case 3: cout << "\n-----------\n1. Eagle\n2. Chicken\n3. Exit to Main Menu" << endl;
                {//int choice;
                cin>>choice;
                switch (choice){
                case '1': cout << "\n\n**********\nThe eagle is fast\n**********" << endl; break;
                case '2': cout << "\n\n**********\nThe chicken cannot fly\n**********"<< endl; break;
                case '3': cout << "\n\n**********\nBack to main menu\n**********" << endl; location = 1; break;
                default: cout << "\n\invalid input" << endl; 
                }
                break;
            }
        default: cout<<"\n**********\nExit program\n**********"<<endl;
        }

    } while (location != 0);
    
    
    return 0;

}