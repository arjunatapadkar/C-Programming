#include<iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0 ;

    cout<<"Enter the number to add till that number: "<<endl;
    cin>>n;

    for(int i = 0; i<=n; i++){
        sum +=  i;
    }
    cout<<"The sum of the all numbers till "<<n<<" is "<<sum<<endl;

    return 0;
}