#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    cout<<"Enter the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<(n-1); i++){
        for(int j = i+1; j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Sorted Array: \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    return 0;

}