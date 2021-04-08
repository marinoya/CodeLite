#include <iostream>
using namespace std;

void printArr(int *arr, int arrSize){
    for(int i=0; i<arrSize; ++i, arr++){
        cout << *arr << '\t';
    }
    cout << endl;
}
void printArrVer2(int *arr, int arrSize){
    for(int i=0; i<arrSize; ++i){
        cout << *(arr+i) << '\t';
    }
    cout << endl;
}

int sumOfArray(int *arr, int arrSize){
    int sum = 0;
    for(int i=0; i<arrSize; i++){
        sum+=*arr++;
    }
    return sum;
}

int sumOfArrayVer2(int *arr, int arrSize){
    int sum = 0;
    for(int i=0; i<arrSize; i++){
        sum+=*(arr+i);
    }
    return sum;
}

int main() {
    int a[] = {1,4,3,2};
    printArr(a, 4);
    printArrVer2(a, 4);
    cout << sumOfArray(a, 4) << endl;
    cout << sumOfArrayVer2(a, 4) << endl;
    return 0;
}
