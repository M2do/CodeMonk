#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int n;
		cin>>n;
		int size=n-1;
		int arr[size];
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+size);
		int i;
		for(i=0;i<size-1;i++)
		{
			if(arr[i+1]-arr[i]!=1)
			{
				cout<<arr[i]+1<<endl;
				break;
			}
		}
		if(i==size-1)
		{
			cout<<arr[size-1]+1<<endl;
		}

	}
	return 0;
}