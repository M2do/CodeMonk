#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int size;
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		int i=0;
		int test=0;
		for(i=1;i<size;i++)
		{
			if(arr[i]<=arr[i-1])
			{
				test=1;
				cout<<"0"<<endl;
				break;
			}
		}
		if(test==0&&i==size)
		{
			cout<<"1"<<endl;
		}

	}
	return 0;
}