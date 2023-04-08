
#include<iostream>
using namespace std;

class Greet{
    public:
        int a;
        int b;
    
    void add(int a, int b){
        cout << "the addition of " << a << " and " << b << " is : " << a+b << endl;
    }
};

int main(){

    Greet g;
    g.a = 23;
    g.b = 34;
    g.add(g.a, g.b);


    return 0;
}