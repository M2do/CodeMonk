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

int getSum(int num)
{

	int count=0;
	for(int i=31;i>=0;i--)
	{
		int numbit=num&(1<<i);
		int mask=1<<i;
		if(numbit&mask)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int num;
		cin>>num;
		int count=0;
		for(int i=1;i<=num;i++)
		{
			count+=getSum(i);
		}
		cout<<count<<endl;
	}
	return 0;
}