#include<iostream >

using namespace std;

int main(){
    int n;
    cout<<"Enter the count : \n";
    cin>>n;

    int first = 0;
    int second = 1;
    int i = 3;
    int current;

    if(n==1){
        cout<<"\n0\n";
    }
    else if(n==2){
        cout<<"\n0\n1\n";
    }
    else{
        cout<<"\n0\n1\n";
        while(i<=n){
            current = first + second;
            cout<<current<<endl;
            first = second;
            second = current;
            i++;

        }

    }
    return 0;
}