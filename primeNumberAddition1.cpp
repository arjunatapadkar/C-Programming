#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the last Number : ";
    cin >> n;
    int sum = 0;

    for(int i = 2; i<=n; i++){
        int count =0;
        for(int j = 1; j<=i; j++){
            if(i%j == 0){
                count++;
            }
        }
        if(count==2){
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