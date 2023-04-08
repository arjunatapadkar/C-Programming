#include<iostream>

using namespace std;

int sum(int a, int b){

    return a+b;

}

int main(){
    int a, b;
    cout<<"Enter the number: ";
    cin>>a>>b;

    int c = sum(a, b);

    cout<<"The sum of numbers: "<<c;

    return 0;
}