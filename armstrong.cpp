#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number: \n";
    cin>>n;
    int temp = n;
    int sum = 0;
    while(n>0){
        int rem = n % 10;
        sum = sum + rem * rem *rem;
        n = n / 10;

    }
    if(sum == temp){
        cout<<"Armstrong.";
    }
    else{
        cout<<"Not Armstrong.";
    }
    return 0;
}