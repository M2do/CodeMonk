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

int fib(int num)
{
	if(num==1)
	{
		return 1;
	}
	if(num==0)
	{
		return 0;
	}
	return fib(num-1)%1000000007+fib(num-2)%1000000007;
	
}

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int num;
		cin>>num;
		cout<<fib(num)%1000000007<<endl;
	}
	return 0;
}