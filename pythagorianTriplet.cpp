#include<iostream>

using namespace std;

void pythagorianTriplet(int n1, int n2, int n3 ){
    if(n1>n2 && n1>n3){
        if(n1*n1==n2*n2+n3*n3){
            cout<<"Yes it is.";
        }
        else{
            cout<<"Not.";
        }
    }
    else if(n2>n3){
       if(n2*n2==n1*n1+n3*n3){
            cout<<"Yes it is.";
        }
        else{
            cout<<"Not.";
        }
    }
    else{
        if(n3*n3==n2*n2+n1*n1){
            cout<<"Yes it is.";
        }
        else{
            cout<<"Not.";
        }
    }
}

int main(){
    int n1, n2, n3;
    cout<<"Enter the sides of a triangle: ";
    cin>>n1>>n2>>n3;

    pythagorianTriplet(n1, n2, n3);

    return 0;
}