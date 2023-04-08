#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int a[n];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    int x;
    cin>>x;
    
    int b[x];
    
    for(int i=0; i<x;i++){
        b[i] = a[i];
    }

   for(int i=0; i<x;i++){
        cout<<b[i]<<" ";
    }

    
    for(int i=0; i<n-x; i++){
        a[i] = a[i+x];
    }
    
    for(int i=n-x; i<n; i++){
        a[i] = b[i];
    }
    
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}