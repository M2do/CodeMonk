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
int setBits(int num)
{
	int mask=1;
	int count=0;
	for(int i=31;i>=0;i--)
	{
		if(num&(mask<<i))
		{
			count++;
		}
		mask=1;
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
		cout<<setBits(num)<<endl;
	}
	return 0;
}