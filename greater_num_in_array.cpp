#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max = arr[0];
    int min = arr[0];

    for(int i=0; i<10; i++){
        if(max<arr[i]){
            max = arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }

    cout<<"The max number in a given array is : "<<max<<endl;
    cout<<"The min number in a given array is : "<<min<<endl;

    return 0;
}