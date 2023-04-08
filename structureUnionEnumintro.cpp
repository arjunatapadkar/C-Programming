#include<iostream>
#include<string>
using namespace std;

struct employee{
    // data
    int id;
    char name;
    float salary;
    string s;
};

union color{
    //data
    int num;
    float s;

};

int main(){
    enum name{arjun, vinayak, krutij};
    cout<<arjun<<endl;
    // struct employee arjun;
    // arjun.id = 120;
    // arjun.name = 'A';
    // arjun.s = "Arjun Atapadkar.";
    // arjun.salary = 23764274964;
    // cout<<arjun.name<<endl;
    // cout<<arjun.id<<endl;
    // cout<<arjun.salary<<endl;
    // cout<<arjun.s<<endl;

    // union color p;
    // p.num = 213;
    // p.s = 653.5;
    // cout<<p.num<<endl;
    // cout<<p.s<<endl;

    return 0;
}