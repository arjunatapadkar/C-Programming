#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr = arr;
    for(int i=0; i<4; i++){
        cout<<(*ptr)<<endl;
        ptr++;
    }
}