#include<iostream>
using namespace std;

class Demo{

    int a;
    int b;
    int *p;
    public:
        Demo(){
            p = new int ;
        }
        Demo(Demo &l){
            a = l.a;
            b = l.b;
            p = new int;
            *p =(*l.p); 
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
    d1.setdata(23, 43, 12);

    Demo d2 = d1;

    d2.showdata();

    return 0;
}