
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    // set<int> s(1, 112, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    unordered_set<int> s;
    s.insert(1);
    s.insert(12);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    set<char> alpha{'a', 'b', 'c', 'd', 'e'};

    for(auto it=s.begin(); it!=s.end(); it++){
        cout << *it << "  ";
    }
    cout <<endl;

    for(auto it=alpha.begin(); it != alpha.end(); it++){
        cout << *it << " ";
    }


    return 0;
}