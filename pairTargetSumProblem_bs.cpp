#include<iostream>

using namespace std;

void pairTargetSum(int arr[], int n, int targetSum){
    int low = 0;
    int high = n-1;
    
    while(low<high){
        if((arr[low]+arr[high])==targetSum){
            cout<<low<<"  "<<high<<endl;
            break;
        }
        else if((arr[low]+arr[high])<targetSum){
           low--;
        }
        else{
            high++;
        }
    }

    
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int targetSum;
    cout<<"Enter the Target sum: ";
    cin>>targetSum;

    pairTargetSum(arr,  n, targetSum);
    return 0;
}