#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter the character. "<<endl;
    cin>>c;
    char ch = (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U');

    if(ch){
        cout<<"vowel.";
    }
    else{
        cout<<"consonant.";
    }
    return 0;
}