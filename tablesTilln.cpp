#include<iostream>
using namespace std;

// void table(int n){
//     int i=1;
//     while(i<=n){
//         int j = 1;
//         while(j<=10){
//             cout << i << "*" << j <<"= " << i * j++<<endl;
//         }
//         i++;
//         cout << endl;
//     }
// }

void table(int n){
    int i = 1;
    while(i<=10){
        int j = 1;
        while(j<=n){
            cout << i* j<< "\t";
            j++;
        }
        i++;
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter the last number : ";
    cin >> n;
    table(n);
    return 0;
}