#include<iostream>
using namespace std;

int main(){
    int sidea, sideb, sidec;
    cout<<"Enter the sides of the triangle.";
    cin>>sidea>>sideb>>sidec;

    if(sidea==sideb && sideb==sidec){
        cout<<"This is the equilateral triangle.";
    }
    else if(sidea==sideb || sideb==sidec || sidec==sidea){
        cout<<"This triangle is isoscales.";
    }
    else{
        cout<<"This triangle is scalene.";
    }
    return 0;
}