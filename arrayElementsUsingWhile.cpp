#include<iostream>

using namespace std;
int main(){
    int arr[] = {12, 24, 456, 356, 34, 58, 24, 78, 345, 234};

    int i = 0;
    while(i<10){
        cout<<"THe element at index "<<i<<" is "<<arr[i]<<endl;
        i++;
    }
    
    i = 0;
    cout<<"Using do while loop:- \n";
    do{
        cout<<"THe element at index "<<i<<" is "<<arr[i]<<endl;
        i++;
    }while(i<10);
    return 0;
    
}