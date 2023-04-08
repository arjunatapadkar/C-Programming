#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b;
    int choice;
    cout<<"Choose the number to perform a particular task. "<<endl;

    cout<<"1. Addition "<<endl;
    cout<<"2. Subtraction "<<endl;
    cout<<"3. Multiplication "<<endl;
    cout<<"4. Divide"<<endl;
    cout<<"5. Square Root"<<endl;

    cin>>choice;

    if(choice<5){
        cout<<"Enter the two numbers : "<<endl;
        cin>>a>>b;
    }
    if(choice==5){
        cout<<"Enter the number: "<<endl;
        cin>>a;
    }

    if(choice == 1){
        cout<<"The addition of the "<<a<<" and "<<b<<" is: "<<a+b<<endl;
    }
    else if(choice == 2){
        cout<<"The subtraction of the "<<a<<" and "<<b<<" is: "<<a-b<<endl;
    }
    else if(choice == 3){
         cout<<"The multiplication of the "<<a<<" and "<<b<<" is: "<<a*b<<endl;
    }
    else if(choice == 4){
        cout<<"The division of the "<<a<<" and "<<b<<" is: "<<a/b<<endl;
    }
    else if(choice == 5){
         cout<<"The square root of the "<<a<<" is "<<sqrt(a)<<endl;   
    }

    return 0;
    
}