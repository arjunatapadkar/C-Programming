#include<bits/stdc++.h>

using namespace std;

int linearsearch(int arr[], int a, int key){
    for(int i = 0; i<a; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[10];
    int key;

    cout <<"Enter the array elements: \n";

    for(int i = 0; i<10; i++){
        cin>>arr[i];
    }

    cout<<"Enter the key: ";
    cin>>key;

    int ans = linearsearch(arr, 10, key);

    cout<<ans;
    return 0;
}