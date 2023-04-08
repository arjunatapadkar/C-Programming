#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A& setData(int a){
        this->a=a;
        return *this;
    }
    void getData(void){
        cout<<"The value of the a is "<<a<<endl;
    }
};

int main(){

    A a;
    a.setData(5).getData();
    a.getData();

    return 0;
}