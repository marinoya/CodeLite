#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "My Template2" << endl;
    cout<<"\n**********declare 2 empty vectors of ints - vector1 and vector2 ***************"<<endl;
    vector<int> vector1;
    vector<int> vector2;
    cout<<"\n**********add 10 and 20 to vector1 dynamically using .push_back() method ***************"<<endl;
    vector1.push_back(10);
    vector1.push_back(20);
    cout<<"\n**********display the elements in vector1 using the .at() method***************"<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<<"\n**********display the size of vector1 using the .size() method***************"<<endl;
    cout<<"\nvector1 contains "<<vector1.size()<<" elements"<<endl;
    cout<<"\n**********add 100 and 200 to vctor2 using the push_back() method***************"<<endl;
    vector2.push_back(100);
    vector2.push_back(200);
    cout<<"\n**********display the elements in vector2 using the at method***************"<<endl;
    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;
    cout<<"\n**********declare a 2D vector called vector_2d***************"<<endl;
    vector <vector <int>> vector_2d;
    cout<<"\n**********add vector1 & 2 to vector_2d by using the push_back method**********************"<<endl;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout<<"**********display the elements in vector_2d using the at method***************"<<endl;
    cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;
    cout<<"**********change vector1.at(0) to 1000***************"<<endl;
    vector1.at(0) = 1000;
    cout<<"**********display the elements in vector_2d again using the at method***************"<<endl;
    cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;
    cout<<"**********display the elements in vector1 again using the at method***************"<<endl;
    cout<<vector1.at(0)<<" "<<vector1.at(1)<<endl;
    
    vector_2d.at(0)=vector1;
    cout<<"*************************"<<endl;
    cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;
    
    return 0;
}