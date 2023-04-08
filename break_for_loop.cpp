
// Break statement is used to terminate the current loop. As soon as the break statement is encountered in a loop, all further iteration 
// of the loop are stopped and control is shifted to the first statement after the end of loop. 

#include<iostream>
using namespace std;

int main(){

    for(int i=1; i<=20; i++){
        if(i==12){
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}