#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Entr hte size of the array:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: "<<endl;;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"The sorted Array:-"<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}