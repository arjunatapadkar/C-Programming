#include<iostream>

using namespace std;

int maxNumber(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>c){
        return b;
    }
    else{
        return c;
    }
}

int minNumber(int a, int b, int c){
    if(a<b && a<c){
        return a;
    }
    else if(b<c){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int num1, num2, num3;
    cout<<"Enter The Numbers: \n";
    cin>>num1>>num2>>num3;

    int max = maxNumber(num1, num2, num3);
    int min = minNumber(num1, num2, num3);

    cout<<"Maximum Number : "<<max<<endl;
    cout<<"Minimum Number : "<<min<<endl;

    return 0;
}