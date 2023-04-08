#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    
    int pd = arr[1] - arr[0];
    int ans = 2;
    int j = 2;
    int current = 2;

    while(j<n){
        if((arr[j] - arr[j-1])==pd){
            current++;
        }
        else{
            pd = arr[j] - arr[j-1];
            current = 2;
        }
        ans = max(current, ans);
        j++;
    }
    cout<<ans;

}