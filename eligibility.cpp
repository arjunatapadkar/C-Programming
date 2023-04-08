#include<iostream>

using namespace std;

void voting(int age){
    if(age>=18 && age <=150){
        cout<<"You can vote.";
    }
    else if(age>0 && age<18){
        cout<<"You cannot vote.";
    }
    else{
        cout<<"Enter the valid number.";
    }
}

int main(){
    int age;
    cout<<"Enter the age: \n";
    cin>>age;

    voting(age);

    return 0;
}