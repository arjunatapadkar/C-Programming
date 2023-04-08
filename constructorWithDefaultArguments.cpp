#include<iostream>
using namespace std;

class simple{

    int data1;
    int data2;
    int data3;

    public:
        simple(int a, int b=50, int c = 100){
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void printdata();
        
};

void simple :: printdata(){
    cout<<"The values of the data1, data2 and data3 is "<<data1<<", "<<data2<<" and "<<data3<<endl;
        
}

int main(){

    simple o1(1, 2, 3), o2(4, 5), o3(6);

    o1.printdata();
    o2.printdata();
    o3.printdata();

    return 0;
}