#include<iostream>
using namespace std;

class Test{
    int a;
    int b;
    public:
        Test(int i, int j): a(i), b(j){
            cout<<"Constructor Invoked "<<endl;
            cout<<"The value of the a is "<<a<<endl;
            cout<<"The value of the b is "<<b<<endl;
        }
};

int main(){
    Test t(10, 20);
    return 0;
}