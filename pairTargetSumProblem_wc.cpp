#include<iostream>

using namespace std;

void pairTargetSum(int arr[], int n, int targetSum){
    int s = true;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            if((arr[i]+arr[j])==targetSum){
                cout<<i<<"  "<<j<<endl;
                s=false;
                break;
            }
        }
    }
    if(s==true){
        cout<<"Not Such Pair Occurred.";
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int targetSum;
    cout<<"Enter the target sum: ";
    cin>>targetSum;

    pairTargetSum(arr, n, targetSum);

    return 0;
}