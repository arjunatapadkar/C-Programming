#include<iostream>
using namespace std;

class Demo{
    int a;
    int b;
    int *p;
    public:

        Demo(){
            p = new int;
        }
        void setdata(int x, int y, int z){
            a = x;
            b = y;
            *p = z;
        }
        void showdata(){
            cout<<"The value of the a is "<<a<<endl;
            cout<<"The value of the b is "<<b<<endl;
            cout<<"The value of the *p is "<<*p<<endl;
        }

};

int main(){

    Demo d1;
    d1.setdata(34, 54, 23);
    Demo d2 = d1;
    d2.showdata();

    return 0;
}