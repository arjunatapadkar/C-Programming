#include<iostream>
using namespace std;

template <class T>

class vector{
    public:
    int size;
    T *arr;
    vector(int m){
        size = m;
        arr = new T[size];
    }

    T dotProduct(vector &v){
        T d = 0;
        for(int i=0; i<size; i++){
            d += this->arr[i]*v.arr[i];
        }
        return d;
    }
};

int main(){

    vector<float> v1(3);
    v1.arr[0] = 2.21;
    v1.arr[1] = 3.02;
    v1.arr[2] = 4.09;

    vector<float> v2(3);
    v2.arr[0] = 1.10;
    v2.arr[1] = 2.02;
    v2.arr[2] = 3.0123;

    

    cout<<  v1.dotProduct(v2);

    // cout<<a<<endl;

    return 0;
}