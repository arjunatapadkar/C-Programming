#include<bits/stdc++.h>

using namespace std;

int hexadecimalToDecimal(string n){
    int ans = 0;
    int x = 1;

    int s = n.size();
    cout<<"size: "<<s<<endl;

    for(int  i = s-1; i>=0; i--){
        if(n[i]>='0' && n[i]<='9'){
            
            ans = ans + (x * (n[i]-'0'));
            
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans = ans + x * (n[i] - 'A' + 10);
        } 

        x = x * 16;
    }
    return ans;
}

int32_t main(){
    string n;
    cout<<"Enter: ";
    cin>>n;

    cout<<hexadecimalToDecimal(n);
    return 0;
}