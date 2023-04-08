#include<iostream>
using namespace std;
// 01-->
// float funcAverage(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }


// 02-->
template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg; 
}

template<class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    // 01-->
    // float a = funcAverage(8, 7);
    // cout<<"The average is --> "<<a<<endl;

    //02-->

    float a = funcAverage(2.3, 5);
    cout<<"The average --> "<<a<<endl<<endl;

    int x = 5, y = 6;
    swapp(x, y);
    cout<<x<<"  "<<y<<endl;

    return 0;
}