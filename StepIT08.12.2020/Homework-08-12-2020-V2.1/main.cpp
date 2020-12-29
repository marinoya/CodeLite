#include <iostream>
using namespace std;

int main() {
    cout << "My Template2" << endl;
    
    int location = 1;
    char choice;
    //1-main, 2-animal, 3-birds, 0-exit

    do {
        cin >> choice;
        switch (location) {
        case 1: {
            cout << "\n\n**********\nMain menu\n**********\n (please make your choice):\n1. Animals\n2. Birds\n3. Exit"<< endl;
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
                cout << "\ninvalid choice" << endl;
            }
            break;
        }
        case 2: {
            cout<< "\n1. Dog \n2. Cat \n3. Exit to Main Menu" << endl;
            switch (choice) {
            case '1': cout << "The dog barks" << endl; break;
            case '2': cout << "The cat is afraid of dogs"<< endl; break;
            case '3': cout << "\n\n**********\nBack to main menu\n**********" << endl; location =1; break;
            default: cout << "\ninvalid choice"<< endl;
            }
            break;
        }
        case 3: cout << "\n1. Eagle\n2. Chicken\n3. Exit to Main Menu" << endl;
                {//int choice;
                switch (choice){
                case '1': cout << "The eagle is fast" << endl; break;
                case '2': cout << "The chicken cannot fly"<< endl; break;
                case '3': cout << "Back to main menu" << endl; location = 1; break;
                default: cout << "\ninvalid input" << endl; 
                }
                break;
            }
        default: cout<<"/n**********/nExit program/n**********"<<endl;
        }

    } while (location != 0);
    
    
    return 0;

}