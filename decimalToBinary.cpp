#include<bits/stdc++.h>

using namespace std;

int DecimalToBinary(int n){
    int x = 1;
    int ans = 0;
    while(x<=n){
        x =  x * 2;
    }
    x = x / 2;

    while(x>0){
        int lastdigit = n/x;
        n = n - lastdigit*x;
        x = x / 2;
        cout << x;
        ans = ans * 10 + lastdigit; 
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    cout<<DecimalToBinary(n);
    return 0;
}