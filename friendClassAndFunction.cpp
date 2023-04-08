#include<iostream>
using namespace std;

class complex;

class calculator{
    public:
        int realSumComplex(complex , complex );
};

class complex{
    int a;
    int b;

    friend int calculator :: realSumComplex(complex, complex);

    public:
        void setdata(int v1, int v2){
            a = v1;
            b = v2;
        }
};

int calculator :: realSumComplex(complex o1, complex o2){
            return (o1.a + o2.a);
        }

int main(){

    complex o1, o2;
    o1.setdata(3, 5);
    o2.setdata(8, 3);

    calculator cal;
    int res = cal.realSumComplex( o1, o2);
    cout<<"The sum of the real part of the given two complex number is:- "<<res<<endl;
    return 0;
}





// class complex;

// class calculator{

//     public:
//         int add(int a, int b){
//             return (a+b);
//         }

//         int sumRealComplex(complex , complex);
// };

// class complex{

//     int a;
//     int b;

//     friend int calculator :: sumRealComplex(complex, complex);
//     public:
//         void setdata(int v1, int v2){
//             a = v1;
//             b = v2;
//         }

//         void printdata(void){
//             cout<<"Your Number is:- "<<a<<" + "<<b<<"i"<<endl;
//         }
// };


// int calculator :: sumRealComplex( complex o1, complex o2){
//     return (o1.a + o2.a);
// }

// int main(){

//     complex n, m;
//     n.setdata(3, 5);
//     m.setdata(4, 6);

//     calculator calc;
//     int res = calc.sumRealComplex(n, m);

//     cout<<"Result is:- "<<res<<endl;

//     return 0;
// }