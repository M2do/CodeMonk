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

int hcfnum(int lnum,int snum)
{
	while(lnum%snum!=0)
	{
		int rem=lnum%snum;
		lnum=snum;
		snum=rem;
	}
	return snum;
}

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int num;
		cin>>num;
		int start=2;
		int lcm=0;
		int hcf=0;
		for(int i=2;i<=num;i++)
		{
			hcf=hcfnum(start,i);
			lcm=(start*i)/hcf;
			start=lcm;
		}
		cout<<start<<endl;
	}
	return 0;
}