#include<iostream>
using namespace std;

int main(){

    int num1;

    cout << " enter the number :  " << endl;
    cin >> num1;

    int i = 2;
    while(i < num1){

        if(num1%i==0){
            cout << " not a prime number "<< endl;
            break;
        }
        i++;

    }
    if(num1==i){
        cout << "It is prime number" << endl;
    }
    return 0;
}