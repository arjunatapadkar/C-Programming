#include<iostream>
using namespace std;

class Base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }
};

class Base2{
    protected:
        int base2int;

    public:
        void set_base2int(int a){
            base2int = a;
        }
};

class Derived : public Base1, public Base2{
    public:
        void show(){
            cout<<"The value of the Base 1 integer : "<<base1int<<endl;
            cout<<"The value of the Base 2 integer : "<<base2int<<endl;
            cout<<"The sum of these two is : "<<base1int+base2int<<endl;
        }
};


int main(){

    Derived Arjun;
    Arjun.set_base1int(23);
    Arjun.set_base2int(45);
    Arjun.show();

    return 0;
}