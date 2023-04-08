
#include<iostream>
using namespace std;

union GFG{

    int geek1;
    char geek2;
    float geek3;
};

int main(){

    union GFG g1, g2, g3;

    g1.geek1 = 34;
    g2.geek2 = 14;
    g3.geek3 = 34.34;

    cout << "The first value : " << g1.geek1 << endl;
    cout << "The second value : " << g2.geek2 << endl;
    cout << "The third value : " << g3.geek3 << endl;

    cout << "Thank You";

    return 0;
}