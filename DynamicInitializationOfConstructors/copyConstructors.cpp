#include<iostream>
using namespace std;

class number{

    int a;
    public:
        number(){

            a = 0;
        }

        number(int num){
            a = num;
        }
        // When no copy constructor found, Compiler supplies its own copy constructor.
        number(number &obj){
            cout<<"The copy constructor invoked !!!!!"<<endl;
            a = obj.a;
        }
        void display(){
            cout<<"The Number for this object is "<<a<<endl;
        }
};

int main(){

    number n1(25), n2(34), n3;
    n1.display();
    n2.display();
    n3.display();

    number n = n3;   // Copy constructor is invoked.
    n.display();

    number z(n2);
    z.display(); // Copy constructor is invoked.

    n3 = n1;  // Copy constructor is not invoked.
    n3.display();

    return 0;
}