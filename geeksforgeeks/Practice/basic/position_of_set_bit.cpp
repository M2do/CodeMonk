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

bool ispowTwo(long long int num)
{
	long long int mask=num-1;
	if(!(num&mask))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int findPos(long long int num)
{
	int count=0;
	
	for(int i=0;i<32;i++)
	{
		if(!(num>>i))
		{
			break;
		}
		count++;
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		long long int num;
		cin>>num;
		if(ispowTwo(num))
		{
			cout<<findPos(num)<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}