#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the last Number : ";
    cin >> n;
    int sum = 0;

    for(int i = 2; i<=n; i++){
        bool flag  = true;
        for(int j = 2; j<i; j++){
            if(i%j == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << i <<" : Prime\n";
            sum = sum + i;
        }
        else{
            cout << i << " : Not Prime \n";
        }

    }
    cout << " Sum of all Prime Numbers : " << sum ;
    return 0;
}