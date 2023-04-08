#include<bits/stdc++.h>
#include<limits.h>

using namespace std;

int main()
{

    // int n;
    // cout<<"Enter the size:";
    // cin>>n;

    // int a[n];
    // for(int i=0; i<n; i++){
    //     cin>>a[i];
    // }

    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(a[i]==a[j]){
    //             cout<<"First Repeating Element : "<<a[i];
    //             return 0;
    //         }
    //     }
    // }
    // cout<<"Not any repeating element.";
    

    int n;
    cout<<"Enter the size: ";
    cin>>n;

    int a[n];
    cout<<"Enter the array: \n";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int N = 1e6+2;
    int index[N];

    for(int i=0; i<N; i++){
        index[i] = -1;
    }
    int mn = INT_MAX;
    

    for(int i=0; i<n; i++){
        if(index[a[i]] != -1){
            mn = min(mn, a[i]);
        }
        else{
            index[a[i]] = a[i];
        }
    }
    if(mn==100){
        cout<<"-1";
    }
    else{
        cout<<"ans="<<mn;
    }

    return 0;
}