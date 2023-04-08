#include<iostream>
using namespace std;

int addnumbers(int x, int y, int a, int b)
{
    int addition = x + y + a + b;
    return addition;
}
int main()
{
    int a, b, c, d;
    cout<<"Enter the numbers to add them : \n";
    cin >> a>>b>>c>>d;
    // cin >> b;
    // cin >> c;
    // cin >> d;
    cout << addnumbers(a, b, c, d);
    return 0;
}