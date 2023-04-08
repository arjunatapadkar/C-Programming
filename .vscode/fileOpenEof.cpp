#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;

int main(){
    ofstream out;
    out.open("samplefile.txt");
    out<<"this is me"<<endl;
    out<<endl<<endl;
    out<<"This is also me"<<endl;
    out<<"This is me also"<<endl;
    out.close();

    string st;
    ifstream in;
    in.open("samplefile.txt");
    // in>>st;
    // getline(in, st);
    // cout<<st;
    while(in.eof()==0){
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();

    return 0;
}