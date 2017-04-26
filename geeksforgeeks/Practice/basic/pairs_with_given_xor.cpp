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
		int num;
		cin>>num;
		int arr[num];
		for(int i=0;i<num;i++)
		{
			cin>>arr[i];
		}
		int x;
		cin>>x;
		int count=0;
		for(int i=0;i<num-1;i++)
		{
			for(int j=i+1;j<num;j++)
			{
				if((arr[j]^arr[i])==x)
				{
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}