#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
        void getData(void){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }
};

int main(){

    complex *ptr = new complex;
    ptr->setData(5, 50);
    ptr->getData();

    complex *ptr1 = new complex[4];
    ptr1->setData(1, 2);
    (ptr1+1) ->setData(3, 4);
    ptr1->getData();
    (ptr1+1) ->getData();

    return 0;
}