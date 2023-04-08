#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the positive integer :";
    cin>>n;
    int sum = 0;

    while(n>0){
        sum = sum + n;
        cout<<"Enter the positive integer :";
        cin>>n;
    }
    cout<<"\nThe sum all the positive numbers is "<<sum<<endl;

    return 0;
}