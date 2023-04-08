#include<bits/stdc++.h>

using namespace std;

int main(){

    int binary1, binary2;
    cin>>binary1>>binary2;

    int rem = 0;
    int sum[100];
    int i = 0;

    while(binary1 !=0 || binary2!=0){
        sum[i++] = (binary1 % 10 + binary2 % 10 + rem) % 2;
        rem = (binary1 % 10 + binary2 % 10 + rem) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }

    if(rem ==1){
        sum[i++] = 1;
    }
    --i;

    while(i>=0){
        cout<<sum[i];
        i--;
    }
    return 0;
}