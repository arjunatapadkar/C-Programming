#include<iostream>
#include<string>
using namespace std;

class Arjun
{
    public:
        void setname(string x)
        {
            name = x;
        }
        string getname()
        {
           return name; 
        }

    private:
        string name;
};


int main()
{
    Arjun a;
    a.setname("Arjun is a awesome guy !!!!");
    cout<< a.getname();
    
    return 0;
}