#include<iostream>
#include<string>

using namespace std;
int main(){
    string s = "Arjun";
    s.clear();
    if(s.empty()){
        cout<<"String is Empty.";
    }
    return 0;
}