#include <iostream>
using namespace std;

class numbers;

class complex{
    public:
        int addrealComplex(numbers , numbers);

        int addimgcomplex(numbers, numbers);
};

class numbers{
    int a, b;
    //Declaring the specific functions of the complex class as a friend of numbers class(It allows to only that particular function of the complex class to access the private data of the numbers class ) as given below ---> 

    // friend int complex::addrealComplex(numbers, numbers);
    // friend int complex::addimgcomplex(numbers, numbers);

    //Declaring the whole class as friend of this class
    //--> friend class complex(it allows to all the functions of the complex class to access the private data of the numbers class) as given below --->
    friend class complex;

    public:
        void setdata(int v1, int v2){
            a = v1;
            b = v2;
        }
        void printNumber(void){
            cout<<"Your number is:- "<<a<<" + "<<b<<"i"<<endl;
        }
};

int complex::addrealComplex(numbers o1, numbers o2){
    return (o1.a+ o2.a);
}

int complex::addimgcomplex(numbers o1, numbers o2){
    return (o1.b+o2.b);
}

int main(){

    numbers o1, o2, o3;
    o1.setdata(3, 5);
    o1.printNumber();

    o2.setdata(3, 7);
    o2.printNumber();

    complex add;

    o3.setdata(add.addrealComplex( o1, o2), add.addimgcomplex( o1, o2));
    o3.printNumber();
    return 0;

}