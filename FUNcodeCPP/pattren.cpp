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
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int num;
		cin>>num;
		int rng=2*num-1;
		int arr[rng];
		for(int i=0;i<rng;i++)
		{
			arr[i]=num;
		}
		for(int i=0;i<rng;i++)
		{
			for(int j=0;j<i;j++)
			{
				arr[j]=arr[j]-j;
				cout<<arr[j];
			}
			for(int j=i;j<rng-i;j++)
			{
				arr[j]=arr[j]-i;
				cout<<arr[j];
			}
			for(int k=rng-i;k<rng;k++)
			{
				arr[k]=arr[k]+k-rng-1;
				cout<<arr[k];
			}
			cout<<endl;
		}
	}
	return 0;
}