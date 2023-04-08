#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin>>n;

    int reverseNum = 0;

    while(n>0){
        int rem = n % 10;
        reverseNum = reverseNum * 10 + rem;
        n = n / 10;
    }

    cout<<reverseNum;

    return 0;
}