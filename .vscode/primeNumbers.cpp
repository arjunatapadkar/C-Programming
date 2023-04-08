#include <iostream>

using namespace std;

int totalPrime(int s, int e){
    int count = 0, i, j;
    for( i=s; i<=e; i++){
        for( j=2; j<i; j++){
            if(i%j==0){
                break;
            }
           
        }
        if(i==j){
               count++;
           } 
    }
    return count;
}

int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}