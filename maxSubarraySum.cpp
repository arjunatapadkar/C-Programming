#include<iostream>
using namespace std;

int main(){
int i, j, k;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array elements: ";
    for( i=0; i<n; i++){
        cin>>arr[i];
    }

    int maxsum = INT_MIN;
    
    for( i=0; i<n; i++){
        for(j = i; j<n; j++){
            int sum = 0;
            for( k=i; k<=j; k++){
                sum += arr[k];
            }
            maxsum = max(sum, maxsum);
        }
    }

    cout<<"The maximum subarray sum is :"<<maxsum<<endl;

    return 0;
}