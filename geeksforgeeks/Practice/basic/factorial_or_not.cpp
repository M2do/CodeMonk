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

int fac(int num)
{
	if(num==1||num==0)
	{
		return 1;
	}
	return num*fac(num-1);
}
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int num;
		cin>>num;
		int test=0;
		for(int i=0;i<10;i++)
		{ 
			if(num==fac(i))
			{
				test=1;
				break;
			}
		}
		if(test==1)
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
	return 0;
}