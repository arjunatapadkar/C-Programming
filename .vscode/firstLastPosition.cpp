
#include<iostream>
using namespace std;

int findFirstPosition(int arr[], int size, int key){

    int start = 0 , end = size-1, mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;

}

int findLastPosition(int arr[], int size, int key){

    int start = 0 , end = size-1, mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}


int main(){

    int size = 13;
    int key = 3;
    int arr[size] = {1, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 5, 8};

    int firstPosition = findFirstPosition(arr, size, key);
    cout << "The first occurrence : " << firstPosition << endl;

    int lastPosition = findLastPosition(arr, size, key);
    cout << "The last occurrence : " << lastPosition << endl;

    int numberOfOccerrences = lastPosition - firstPosition + 1;

    cout << "The Number of occerrences : " << numberOfOccerrences << endl;

    return 0;
}