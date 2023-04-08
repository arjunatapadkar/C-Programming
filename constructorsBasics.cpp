/* 
Constructor:-  
    --> The constructor is the special member function with the same name as the class.
    --> It is used to initialize the objects of its class.
    --> It is automatically invoked whenever an object is created.
*/

/* 
Characteristics of the constructors:-
    --> It should be declared in the public section of the class.
    --> They are automatically invoked whenever the object is created.
    --> They cannot return values and  do not have return types.
    --> It can have default arguments.
    --> We cannot refer to their address.
*/

#include<iostream>
using namespace std;

class Complex{

    int a, b;

    public:
        Complex(void);

        void printdata(int a, int b){
            cout<<"Your complex Number is "<<a<<" + "<<b<<"i.\n";
        }
};

Complex ::Complex(void){
    a = 0;
    b = 0;
}

int main(){

    Complex c1, c2, c3;
    c1.printdata(5, 7);
    c2.printdata(2, 3);
    c3.printdata(3, 8);
    c1.printdata(4, 5);
    return 0;
}