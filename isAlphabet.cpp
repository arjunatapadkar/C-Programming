#include<iostream>

using namespace std;

void isalphabet(int c){
    if((c>=65 && c<=90)|| (c>=97 && c<=122)){
        cout<<"Alphabet.";
    }
    else{
        cout<<"Not Alphabet.";
    }
}

int main(){
    char c;
    cout<<"Enter the character: \n";
    cin>>c;
    
    isalphabet(c);
    return 0;
}