#include<iostream>

using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i = 1; i<=n; i++){
        factorial = factorial * i;
    }
    return factorial;
}

int main(){
    int n; 
    cout<<"Enter the number to find out the factorial: \n";
    cin>>n;

    int c = fact(n);
    cout<<c;
    return  0;
}