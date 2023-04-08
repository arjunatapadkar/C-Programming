#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    char arr[n];
    cout<<"Enter Array: ";
    cin>>arr;
    bool check = true;
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[n-1-i]){
            check=0;
        }

    }
    if(check==1+){
        cout<<arr<<" is Palindrome.";
    }
    else{
        cout<<arr<<" is not Palindrome.";
    }
    return 0;
}