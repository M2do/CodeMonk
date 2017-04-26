#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <numeric>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <functional>
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
		sort(arr,arr+size);
		int count=0;
		for(int i=0;i<size-2;i++)
		{
			int k=i+2;
			for(int j=i+1;j<size;j++)
			{
				while(arr[i]+arr[j]>arr[k]&&k<size)
				{
					k++;
				}
				count+=k-j-1;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}