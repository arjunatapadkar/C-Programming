#include<iostream>
using namespace std;

class complex{

    int a;
    int b;

    public:
        void setData(int v1, int v2){

            a = v1;
            b = v2;
        }

        void setDataBySumOfComplex(complex object1, complex object2){

            a = object1.a + object2.a;
            
            b = object1.b + object2.b;
            
        }

        void printComplexNumber(void){
            cout<<"The complex number is:- "<<a<<" + "<<b<<"i "<<endl;
        }
};

int main(){

    complex a, b, c;

    a.setData(1, 2);
    a.printComplexNumber();

    b.setData(3, 5);
    b.printComplexNumber();
    
    c.setDataBySumOfComplex( a, b);
    c.printComplexNumber();

    return 0;
}