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
bool powerTwo(long long int num)
{
    if(num==0)
    return false;
	long long int prev=num-1;
	if(!(num&prev))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		long long int num;
		cin>>num;
		if(powerTwo(num))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}