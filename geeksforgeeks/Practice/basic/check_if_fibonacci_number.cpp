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
		int n=13;
		int arr[n];
		arr[0]=0;
		arr[1]=1;
		for(int i=2;i<n;i++)
		{
			arr[i]=arr[i-1]+arr[i-2];
		}
		if(find(arr,arr+n,num)!=arr+n)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}