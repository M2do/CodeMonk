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
//#include <pairs>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <functional>
using namespace std;


vector < int > vec;
void sieveIt(int num)
{
	vector < bool > allnum(num+1,true);
	for(int i=2;i*i<=num;i++)
	{
		if(allnum[i]==true)
		{
			for(int k=2*i;k<=num;k+=i)
			{
				allnum[k]=false;
			}
		}
	}
	for(int i=2;i<=num;i++)
	{
		if(allnum[i]==true)
		{
			vec.push_back(i);
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int num;
		cin>>num;
		sieveIt(num);
		for(int i=0;i<vec.size();i++)
		{
			int pivot=vec[i];
			for(int j=0;j<vec.size();j++)
			{
				if(pivot*vec[j]>num)
				{
					break;
				}
				cout<<pivot<<" "<<vec[j]<<" ";
			}
		}
		vec.clear();
		cout<<endl;
	}
	return 0;
}