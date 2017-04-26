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

void sieveIt(int num)
{
	vector < bool > allnum(num+1,true);
	for(int i=2;i*i<=num;i++)
	{
		if(allnum[i]==true)
		{
			for(int k=i;k<=num;k+=i)
			{
				allnum[k]=false;
			}
		}
	}
	for(int i=2;i<=num;i++)
	{
		if(allnum[i]==true)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int num;
		cin>>num;
		sieveIt(num)
	}
	return 0;
}