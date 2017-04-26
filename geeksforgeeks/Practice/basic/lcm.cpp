#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <numeric>
using namespace std;
int hcf(int num1,int num2)
{
	if(num2<num1)
	{
		swap(num1,num2);
	}
	while(num2%num1!=0)
	{
		int rem=num2%num1;
		num2=num1;
		num1=rem;
	}
	return num1;
}
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
		int prelcm=1;
		for(int i=0;i<n;i++)
		{
			int lcmNumber=arr[i]*prelcm/hcf(prelcm,arr[i]);
			prelcm=lcmNumber;
			//cout<<lcmNumber<<endl;
		}
		cout<<prelcm<<endl;
	}
	return 0;
}