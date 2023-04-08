#include<bits/stdc++.h>

using namespace std;

//Creating a structure of student -->
struct student{

    string str;
    int rollNo;
    int standard;
    float marks;

}; //--> Using typedef function to use structure student as arjun.

int main(){
    string s;
    cout<<"Enter the String:- ";
    getline(cin, s);
    struct student a;

    cout<<"Enter the Roll Number Of the Student:-";
    cin>>a.rollNo;

    cout<<"Enter the name of the Student:- ";
    getline(cin, a.str);//-------> Not working it ?????????????

    cout<<"Enter the standard of the student:-";
    cin>>a.standard;

    cout<<"Enter the marks of the student:-";
    cin>>a.marks;

    cout<<"Your Name in function:- "<<s<<endl;
    cout<<"You Entered Roll Number:- "<<a.rollNo<<endl;
    cout<<"You Entered Name:- "<<a.str<<endl;;
    cout<<"You Entered Standard:- "<<a.standard<<endl;
    cout<<"You Entered Marks:- "<<a.marks<<endl;


    return 0;
}