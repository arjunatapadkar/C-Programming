#include<iostream>
using namespace std;

int main(){

    int n, i;
    cin>>n;
    int arr[n];
    for(i=0; i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;

    for(i=0; i<n; i++){
        if(x == arr[i]){
            cout<<i;
            break;
        }
    }
    if(i==n){
        cout<<"-1";
    }

    return 0;
}