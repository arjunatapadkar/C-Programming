#include<iostream>

using namespace std;

void printnum(int a){
    cout<<"You entered the number : "<<a;
}

int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    printnum(a);
    return 0;
}