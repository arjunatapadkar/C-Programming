#include<iostream>

using namespace std;

int kadane(int arr[], int n){
    int currsum = 0;
    int maxsum = INT_MIN;
    for(int i=0; i<n; i++){
        currsum += arr[i];
        if(currsum<0){
            currsum = 0;
        }
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    int wrapSum;
    int nonWrapSum;

    nonWrapSum = kadane(arr, n);

    int totalSum = 0;
    for(int i=0; i<n; i++){
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    wrapSum = totalSum - (-(kadane(arr, n)));

    cout<<max(wrapSum, nonWrapSum)<<endl;

    return 0;
}