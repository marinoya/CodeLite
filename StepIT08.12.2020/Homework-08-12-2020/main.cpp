#include <iostream>
using namespace std;

int main() {
    int choice1 {0};
    while(true){
        cout<<"Main menu (please make your choice):"<<endl;
        cout<<"1. Animals"<<endl;
        cout<<"2. Birds"<<endl;
        cout<<"3. Exit"<<endl;
        cin>>choice1;
        if (choice1==3||(choice1!=1&&choice1!=2)){
            break;}
        while(choice1==1){
            //SUBMENU1 - animals
            int choice2 {0};
            cout<<"\nSub menu No1 Animals (please make your choice):"<<endl;
            cout<<"1. Dog"<<endl;
            cout<<"2. Cat"<<endl;
            cout<<"3. Exit to Main Menu"<<endl;
            cin>>choice2;
            //cout<<"choice2 is: "<<choice2<<endl;
            if(choice2==3||(choice2!=1&&choice2!=2)){
                break;}
            if(choice2==1){
                cout<<"\n****************\nThe dog barks!\n****************"<<endl;}
            if(choice2==2){
                cout<<"\n****************\nThe cat is afraid of dogs!\n****************"<<endl;}
        }
        while(choice1==2){
            //SUBMENU2 - birds
            int choice2 {0};
            cout<<"\nSub menu No2 Birds (please make your choice):"<<endl;
            cout<<"1. Eagle"<<endl;
            cout<<"2. Chicken"<<endl;
            cout<<"3. Exit to Main Menu"<<endl;
            cin>>choice2;
            //cout<<"choice2 is: "<<choice2<<endl;
            if(choice2==3||(choice2!=1&&choice2!=2))
                {
                break;}
            if(choice2==1){
                cout<<"\n****************\nThe eagle is fast!\n****************"<<endl;}
            if(choice2==2){
                cout<<"\n****************\nThe chicken can not fly!\n****************"<<endl;}
            }
    }
cout << "\n****************\nEnd program\n****************" << endl;
        return 0;
}