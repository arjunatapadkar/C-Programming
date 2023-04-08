#include<iostream>
using namespace std;

int main(){
    int x, y, z;
    cin>>x>>y>>z;

    if(x>y){
        if(x>z){
            cout<<"max num "<<x;
        }
        else{
            cout<<"max num "<<z;
        }
    }
    else{
        if(y>z){
            cout<<"max num "<<y;
        }
        else{
            cout<<"max num "<<z;
        }
    }
    return 0;
}