#include<iostream>
#include<math.h>

using namespace std;

int primeNumber(int a){
    for(int i=2; i<sqrt(a); i++){
        if(a%i==0){
            return false;
        }

    }
    return true;
}

int main(){
    int a, b;
    cout <<"Enter the range of the prime numbers: \n";
    cin>>a>>b;

    for(int i=a; i<=b; i++){
        if(primeNumber(i)){
        cout<<i<<"  ";
        }
    }

    return 0;
}