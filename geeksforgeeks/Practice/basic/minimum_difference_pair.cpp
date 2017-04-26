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
#define max 1000000
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
		sort(arr,arr+num);
		int min=max;
		for(int i=0;i<num-1;i++)
		{
			if(arr[i+1]-arr[i]<min)
			{
				min=arr[i+1]-arr[i];
			}
		}
		cout<<min<<endl;
	}
	return 0;
}