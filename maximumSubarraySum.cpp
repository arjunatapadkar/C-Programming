// Given an array of the size 'n' we have to find out the subarray such that it has maximum sum .

#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;// Input the size of the array.
    // Input the array.
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    // The brute force approach to solve this problem is to iterate over all the subarrays and maintain the maximum sum among all the subarray in this way we have O(n^3) of a Time Complexity.
    
    int mx; //Maximum among the all subarray sum. 
    int sum = 0;
    for(int i=0; i<n;i++){
        for(int j=i;j<n;j++){
            sum=0;
            for(int k=i; k<=j; k++){
                sum += a[k];
            }
            mx = max(mx, sum); 
        }
    }
    cout<<"The maximum Subarray Sum is : "<<mx;

    return 0;
}