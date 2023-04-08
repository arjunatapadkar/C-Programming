#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1 = "Arjun Atapadkar";
    // sort(s1.begin(), s1.end());
    transform(s1.begin(), s1.end(),s1.begin(), ::toupper);
    cout<<s1<<endl;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    cout<<s1<<endl;
    return 0;
}