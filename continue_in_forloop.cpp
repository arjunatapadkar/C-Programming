
//continue statement is used to skip to the next iteration of that loop. this means that it stops one iteration of the loop. All the 
//statements present after the continue statement in that loop are not executed.

#include<iostream>
using namespace std;

int main(){

    for(int i=1; i<=20; i++){
        if(i%3==0){
            continue;
        }

        cout<<i<<endl;
    }

    return 0;
}