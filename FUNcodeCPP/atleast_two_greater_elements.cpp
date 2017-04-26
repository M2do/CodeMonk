#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		vector < int > vec(arr,arr+n);
		sort(vec.begin(),vec.end());
		int last=n-3;
		for(int i=0;i<n;i++)
		{
			if(arr[i]<=vec[last])
			{
				cout<<arr[i]<<" ";
			}
		}/*
		vector < int >::iterator it;
		for(it=vec.begin();it!=vec.end();it++)
		{
			cout<<*it<<" ";
		}*/
		cout<<endl;
	}
}