#include<iostream>

using namespace std;

void evenOdd(int n){
    if(n%2==0){
        cout<<"Even. ";
    }
    else{
        cout<<"odd.";
    }
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    evenOdd(n);
    return 0;
}