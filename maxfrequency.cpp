#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "liruhklwewewgknegh";

    int freq[26];// Declaring array to check frequency.

    for(int i=0; i<=26; i++)
        freq[i] = 0;         // --> Assign all the indexes to zero of the frequency array.
    
    for(int i=0; i<s.size(); i++){
        freq[s[i]-'a']++;            //--> update the frequency array 0 to the string    element minus 'a'.
    }
    char  ans;
    int maxfreq = 0;
    for(int i=0; i<=26; i++){  //checking maximum frequency element.
        if(maxfreq<freq[i]){
            maxfreq = freq[i];
            ans = 'a' + i;
        }
    }

    cout<<maxfreq<<" : "<<ans;
    return 0;
}