#include<iostream>
using namespace std;

class Base{
    int data1;
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();

};

void Base ::setData(){
    data1 = 10;
    data2 = 20;
}

int Base::getData1(){
    return data1;
}

int Base :: getData2(){
    return data2;
}

class Derived : public Base{
    int data3;
    public:
        void Process();
        void Display(void);
};

void Derived ::Process(){
    
    data3 = getData1() * data2;
}

void Derived :: Display(void){
    cout<<"The Value of the data 1 is "<<getData1()<<endl;
    cout<<"The Value of the data 2 is "<<data2 <<endl;
    cout<<"The Value of the data 3 is "<<data3<<endl;
}

int main(){

    Derived derObj;
    derObj.setData();
    derObj.Process();
    derObj.Display();

    return 0;
}