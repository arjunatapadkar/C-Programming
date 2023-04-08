#include<iostream>
using namespace std;

class Demo{
    public:
    int x;

    Demo(int a){
        x = a;
    }
    Demo(Demo &b){
        x = b.x;
    }

};

int main(){

    Demo d1(20);

    Demo d2(d1);

    cout<<d2.x;

    return 0;
}