#include<iostream>
using namespace std;

class Y;

class X{
    int data;
    friend void add(X, Y);
    public:
        void setdata(int n1){
            data = n1;
        }
};

class Y{
    int num;
    friend void add(X, Y);
    public:
        void setdata(int n2){
            num = n2;
        }
};

void add(X o1, Y o2){
    cout<<"The sum of the two numbers from class X and Y is:-"<<o1.data+o2.num;
}

int main(){

    X o1;
    o1.setdata(5);

    Y o2;
    o2.setdata(7);

    add( o1,  o2);
    return 0;
}