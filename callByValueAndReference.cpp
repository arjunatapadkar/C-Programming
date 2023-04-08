#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a, b;
    cin>>a>>b;
    int* p;
    int* q;
    p = &a;
    q = &b;
    swap(*p, *q);
    cout<<"Sum:- "<<sum(a, b)<<endl;
    cout<<"Swap;- "<<a<<" "<<b<<endl;
    return 0;
}