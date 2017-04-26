#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <utility>
#include <iomanip>
#include <numeric>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <functional>
using namespace std;

vector < int > vec(1,0);

void getsum(int arr[],int l,int h)
{
	if(l>h)
	{
		return;
	}
	int sum=0;
	for(int i=l;i<=h;i++)
	{
		sum+=arr[i];
	}
	int mid=l+(h-l)/2;
	vec.push_back(sum);
	getsum(arr,l,mid);
	getsum(arr,mid+1,h);
}
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
		getsum(arr,0,size-1);
	}
	return 0;
}