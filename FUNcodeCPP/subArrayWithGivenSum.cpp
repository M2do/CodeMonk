#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i<<" Element : ";
        cin>>arr[i];
    }
    int sum;
    cout<<"Enter Required Sum : ";
    cin>>sum;
    //naive method
    for(int i=0;i<n;i++)
    {
        int curSum=arr[i];
        for(int j=i+1;j<=n;j++)
        {
            if(curSum==sum)
            {
                cout<<"Sum found Between indexes "<<i<<" and "<<j-1<<endl;
                return 1;
            }
            if(j==n||curSum>sum)
            {
                break;
            }
            curSum+=arr[j];
        }
    }
    return 0;
}
