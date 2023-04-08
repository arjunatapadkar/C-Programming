#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;
    int arr[n][m];
    cout<<"Enter the matrix/2D array:\n";
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int flag = true;
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==target){
                cout<<"Element Found!";
                flag = false;
                break;
            }
        }
    }
    if(flag){
        cout<<"Not Found";
    }
    return 0;
}