#include<iostream>
using namespace std;

class Employee{

    private:
        int a, b, c;

    public:
        int d, e;
    
    void setdata(int a1, int b1, int c1);
    void getdata();//{  -----> This method also works.
    //     cout<<"The value of a is:- "<<a<<endl;
    //     cout<<"The value of b is:- "<<b<<endl;
    //     cout<<"The value of c is:- "<<c<<endl;
    //     cout<<"The value of d is:- "<<d<<endl;
    //     cout<<"The value of e is:- "<<e<<endl;
    // }
};

void Employee :: getdata(){

    cout<<"The value of a is:- "<<a<<endl;
    cout<<"The value of b is:- "<<b<<endl;
    cout<<"The value of c is:- "<<c<<endl;        
    cout<<"The value of d is:- "<<d<<endl;
    cout<<"The value of e is:- "<<e<<endl;
};

void Employee :: setdata(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
};

int main(){

    Employee arjun;
    arjun.d = 45;
    arjun.e = 23;
    // arjun.setdata(1, 2, 3 );
    arjun.getdata();
    return 0;
}