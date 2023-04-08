#include<iostream>
using namespace std;

template<class T1=int, class T2=float, class T3 =char>
class myClass{
    public:
    T1 a;
    T2 b;
    T3 c;
    myClass(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"The Value of a is "<<a<<endl;
        cout<<"The Value of b is "<<b<<endl;
        cout<<"The Value of c is "<<c<<endl;
    }
};

int main(){

    myClass<> Ar(12, 12.323, '2');
    Ar.display();
    myClass<int, char, char> B(1, 95, 'e');
    B.display();
    return 0;
}