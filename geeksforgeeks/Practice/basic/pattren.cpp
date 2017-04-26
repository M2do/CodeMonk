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
		for(int i=0;i<rng/2+1;i++)
		{
			
			for(int j=i;j<rng-i;j++)
			{
				arr[j]=num-i;
			}
			for(int j=0;j<rng;j++)
			{
				cout<<setw(2)<<arr[j]<<" ";
			}
			cout<<endl;
		}
		for(int i=0;i<rng/2;i++)
		{
			int fr=rng/2-i;
			int ti=2*i+1;
			int k=0;
			while(k<ti)
			{
				arr[fr]=arr[fr]+1;
				fr++;
				k++;
			}
			for(int i=0;i<rng;i++)
			{
				cout<<setw(2)<<arr[i]<<" ";
			}
			cout<<endl;
		}
		
	}
	return 0;
}