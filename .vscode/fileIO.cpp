#include<iostream>
#include<fstream>

using namespace std;

int main(){

    string st = " Arjun Atapadkar";

    // opening files using constructor and writing to it

    ofstream a("samplefile.txt");  // write operation

    a<<st;

    return 0;
}
