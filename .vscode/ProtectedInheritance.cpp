#include<iostream>
using namespace std;

class Base{
    private:
        int a = 10;
    protected:
        int b = 20;
    public:
        void display(){
            cout<<a<<endl;
        }
};

class Derived : protected Base{

};

int main(){
    Derived der;
    // cout<<der.a;// can not work protected members of the base class are protected in child class.
    return 0;
}