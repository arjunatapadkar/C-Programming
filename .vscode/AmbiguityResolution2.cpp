#include<iostream>
using namespace std;

class Base{
    public:
        void say(){
            cout<<"Good Morning!!!"<<endl;
        }
};

class Derived : public Base{
    public:
        void say(){
            cout<<"Good Night!!!"<<endl;
        }
};

int main(){

    Base b;
    b.say();

    Derived d;
    d.say();

    return 0;
}