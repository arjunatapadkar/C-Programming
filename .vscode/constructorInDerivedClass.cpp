#include<iostream>
using namespace std;

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"The Base1 class constructor is called"<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of Data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2 ;
    public:
        Base2(int i){
            data2 = i;
            cout<<"The Base2 class constructor is called"<<endl;
        }
        void printDataBase2(void){
            cout<<"The value of Data2 is "<<data2<<endl;
        }
};

class Derived : public Base1, public virtual Base2{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"The Derived class is called"<<endl;
        }
        void printDataDerived(void){
            cout<<"The value of Derived1 is "<<derived1<<endl;
            cout<<"The value of Derived2 is "<<derived2<<endl;
        }
};

int main(){

    Derived Arjun(1, 2, 3, 4);
    Arjun.printDataBase1();
    Arjun.printDataBase2();
    Arjun.printDataDerived();

    return 0;
}