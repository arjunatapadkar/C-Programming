#include<iostream>
using namespace std;
int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 2;
    int b = 5;
    swap(&a, &b);
    cout<<a<<"  "<<b;
    return 0;
}