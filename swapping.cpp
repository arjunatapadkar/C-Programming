#include<iostream>

using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"After the swapping: \n";
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
}

int main(){
    int a, b;
    cout<<"Enter the two numbers: \n";
    cin>>a>>b;

    cout<<"Before swapping : \n";
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    swap(a, b);

    return 0;
}