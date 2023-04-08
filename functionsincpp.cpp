#include<iostream>
using namespace std;

int sum(int a, int b){

    return a+b;
}

int main(){

    int num1, num2;

    cout<<"Enter the first number:- ";
    cin>>num1;
    cout<<"Enter the second number:- ";
    cin>>num2;

    cout<<"* * * * * * * * * * * * * * * * \n";
    cout<<"* The sum of "<<num1<<" and "<<num2<<" is "<<sum(num1, num2)<<"  *"<<endl;
    cout<<"* * * * * * * * * * * * * * * *\n";
    return 0;
}