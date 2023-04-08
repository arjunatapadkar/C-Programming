#include<iostream>

using namespace std;

int sumOfNaturalNumbers(int n){
    return ((n * (n+1))/2);
}

int main(){
    int n;

    cout<<"Enter the range of the natural number: ";
    cin>>n;

    int c = sumOfNaturalNumbers(n);
    cout<<c;
    return 0;
}