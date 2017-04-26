#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int num;
        cin>>num;
        int arr[num];
        arr[1]=1;
        arr[2]=2;
        for(int i=3;i<=num;i++)
        {
            arr[i]=arr[i-1]+arr[i-2];
        }
        cout<<arr[num]<<endl;
    }
	return 0;
}