#include<iostream>

using namespace std;

int main()
{
    //it gives error to initialize more elements in an array than its declared size
    int arr[3] = {10, 20, 30, 40, 50};
    cout<<arr[2];
    return 0;
}