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
    (*ptr).setData(4, 6);
    (*ptr).getData();


    return 0;
}