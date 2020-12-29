#include <iostream>
using namespace std;

int main() {
//    cout<<"FOR"<<endl;
//    for(int i=0; i<10; i++){
//        cout<< i<<endl;}
//    
//    cout<<"WHILE"<<endl;
//    int i {0};
//    while(i<10){
//        cout <<i<<endl;
//        i++;}
//    return 0;
//    
//    int x;
//    for(x=0;x<10;x++){
//        cout<<x<<endl;}
    
    int u{0};
    int res{1};
    cin >> u;
    for(int i=1; i<=u;i++){
        res*=i;}
        cout << res<< endl;
}