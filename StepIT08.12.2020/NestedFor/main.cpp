#include <iostream>
using namespace std;

int main() {
//    for (int i=0; i<5;i++){
//        for(int n=0;n<3;n++){
//            cout<< "i=" << i<<" n=" <<n<<"; ";}
//        cout<<endl;}
        
//    for (int i=0; i<5;i++){
//        for(int n=0;n<5;n++){
//            if (i==0 ||n==0){
//                cout<< "*";}
//            else if(i==4||n==4){
//                cout<< "*";}
//            else{
//                    cout<<" ";}
//            }
//        cout<<endl;}
int n{0};
cin >> n;
for(int height=0;height<=n;height++){
    for(int width=n;width >=0;width--){
        cout<< " ";}
    for(int width=1;width<height;width++){
        cout<< "*";}
    cout<<endl;}        
    return 0;
}