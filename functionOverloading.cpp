#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

float sum(int a, int b, int c){
    return a+b+c;
}

int main(){
    int a = 23, b = 34, c = 45;

    cout<<"The sum of variable A and B is "<<sum(a, b)<<endl;
    cout<<"The sum of variable A, B And C is "<<sum(a, b, c)<<endl;

    return 0;
}