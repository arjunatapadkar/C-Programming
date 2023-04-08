#include<iostream>
#include<fstream>

using namespace std;

int main(){

    string fullname;

    cout<<"Enter your full name : "<<endl;
    // cin>>fullname;  ---> this will only takes one word as input 
    getline(cin, fullname);

    ofstream hout("samplefile.txt");
    hout<<"My name is " + fullname;

    hout.close();

    string content;
    ifstream hin("Samplefile.txt");
    // hin>>content;   ---> This will only gives the starting word cause cin does consider whitespaces as a termination.

    getline(hin, content);
    cout<<"The content of this file is : "<<content<<endl;


    return 0;
}