#include<iostream>
using namespace std;

int fib(int n){
    if(n<=1){
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}

int main(){
    int num;
    cout<<"Enter the number:-";
    cin>>num;

    cout<<"The number in the series at position "<<num<<" is "<<fib(num)<<endl;
    return 0;
}