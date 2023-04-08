#include<iostream>
using namespace std;

int main(){
    int arr[20];
    cout<<"Enter the array elements: ";
    
    for(int i=0; i<20; i++){
        cin>>arr[i];
    }

    for(int i=0; i<20; i++){
        cout<<i+1<<". "<<arr[i]<<endl;
    }

    return 0;
}