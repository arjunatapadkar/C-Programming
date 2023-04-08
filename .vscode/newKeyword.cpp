#include<iostream>
using namespace std;

int main(){

    int* p = new int(40);
    cout<<"The value of the p is "<<*p<<endl;

    float* a = new float(45.34);
    cout<<"The value of the a is "<<*a<<endl;
    return 0;
}