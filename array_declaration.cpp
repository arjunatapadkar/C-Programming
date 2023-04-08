#include<iostream>

using namespace std;

int main()
{
    int arr[5];
    arr[0] = 34;
    arr[2] = 35;
    arr[3/2] = 56;
    cout<<arr[0]<<"\n"<<arr[1]<<"\n"<<arr[2]<<"\n"<<arr[3]<<"\n"<<arr[4]<<"\n"<<arr[3/2]<<"\n";
    return 0;
}