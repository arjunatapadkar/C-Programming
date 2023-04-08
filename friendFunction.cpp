#include<iostream>
using namespace std;

class complex{

    int a;
    int b;

    friend complex sumComplex(complex o1, complex o2);
    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }

        void printComplex(void){
            cout<<"The Complex Number is:- "<<a<<" + "<<b<<"i"<<endl;
        }
        // void setdatabysum(complex o1, complex o2){
        //     a = o1.a + o2.a;
        //     b = o1.b + o2.b; 
        // }
};

complex sumComplex(complex o1, complex o2){
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main(){

    complex a, b, c;
    a.setData(3, 5);
    a.printComplex();
    b.setData(2, 5);
    b.printComplex();
    c = sumComplex(a, b);
    c.printComplex();

    return 0;
}