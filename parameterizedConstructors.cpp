#include<iostream>
using namespace std;

class complex{

    int a, b;
    public:
        complex(int, int);

        void printNumber(void){
            cout<<"Your Complex Number Is "<<a<<" + "<<b<<"i.\n";
        }
};

complex :: complex(int x, int y){
    a = x;
    b = y;
}

int main(){

    // Implicit Call-->
    complex c1(4, 5);
    c1.printNumber();

    complex a = complex(3, 4);
    a.printNumber();

    return 0;
}