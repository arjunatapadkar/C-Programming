#include<iostream >
using namespace std;

class Y;

class X{
    int Num1;
    friend void swap(X &, Y &);
    public:
        void setData(int a){
            Num1 = a;
        }
        void display(void){
            cout<<Num1<<endl;
        }
};

class Y{
    int Num2;
    friend void swap(X &, Y &);
    public:
        void setData(int a){
            Num2 = a;
        }
        void display(void){
            cout<<Num2<<endl;
        }
};

void swap(X &a, Y &b){
    int temp = a.Num1;
    a.Num1 = b.Num2;
    b.Num2 = temp;
}

int main(){

    X o1;
    o1.setData(34);
    cout<<"The value of the Number in X class before:- ";
    o1.display();

    Y o2;
    o2.setData(54);
    cout<<"The value of the Number in Y class before:- ";
    o2.display();

    swap(o1, o2);

    cout<<"The value of the Number in X class After:- ";
    o1.display();

    cout<<"The value of the Number in Y class After:- ";
    o2.display();

    return 0;
}