#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Spiral array Traversing: \n";
    int row_start=0, row_end=n-1, col_start=0, col_end=m-1;
    while(row_start<=row_end && col_start<=col_end)
    {
        for(int row=col_start; row<=col_end; row++)
        {
            cout<<arr[row_start][row]<<"    ";
        }
        row_start++;

        for(int col=row_start;col<=row_end; col++)
        {
            cout<<arr[col][col_end]<<"    ";
        }
        col_end--;

        for(int row=col_end; row>=col_start;row--)
        {
            cout<<arr[row_end][row]<<"     ";
        }
        row_end--;
        for(int col=row_end;col>=row_start; col--)
        {
            cout<<arr[col][col_start]<<"    ";
        }
        col_start++;
    }


    return 0;
}