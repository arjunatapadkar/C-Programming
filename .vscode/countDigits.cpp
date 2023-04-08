#include <iostream>

using namespace std;

int countBits(int a){
    int counter = 0;
    while(a>0 && a<100){
        if(a%2!=0){
            counter++;
        }
        a = a/2;
    }
    return counter;
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}