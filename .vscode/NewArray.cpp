// New And Delete Keyword

#include<iostream>
using namespace std;

int main(){

    int* p = new int[3];
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    // delete [] p;
    cout<<"The value of p[0] "<<p[0]<<endl;
    cout<<"The value of p[1] "<<p[1]<<endl;
    cout<<"The value of p[2] "<<p[2]<<endl;

    return 0;
}