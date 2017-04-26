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

int redit(int num,int div)
{
	while(num%div==0)
	{
		num/=div;
	}
	return num;
}

bool isUgly(int num)
{
	num=redit(num,2);
	num=redit(num,3);
	num=redit(num,5);
	return (num==1) ? true : false;
}

int getUgly(int n)
{
	int i=1;
	int count=1;
	while(n>count)
	{
		i++;
		if(isUgly(i))
		{
			count++;
		}
	}
	return i;
}

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int num;
		cin>>num;
		cout<<getUgly(num)<<endl;
	}
	return 0;
}