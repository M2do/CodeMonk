#include <bits/stdc++.h>
using namespace std;
void print(int *arr,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<*((arr+i*n)+j)<<" ";
        }
        cout<<endl;
    }
}
void print2(int arr[][4],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[][4]={{23,43,56,43},{34,23,23,23}};
    int m=2,n=4;
    cout<<"Before Calling "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<*(*(arr+i)+j)<<" ";
        }
        cout<<endl;
    }
    cout<<"After Calling "<<endl;
    print((int *)arr,2,4);
    cout<<"Normal Calling "<<endl;
    print2(arr,2,4);
    return 0;
}
