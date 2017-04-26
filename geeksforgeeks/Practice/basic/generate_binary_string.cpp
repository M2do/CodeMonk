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

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		string str;
		cin>>str;
		int len=str.length();
		int count=0;
		for(int i=0;i<len;i++)
		{
			if(str[i]=='?')
			{
				count++;
			}
		}
		int upnum=pow(2,count);
		for(int i=0;i<upnum;i++)
		{
			int temp=i;
			int tm=0;
			for(int k=0;k<len;k++)
			{
				if(str[k]=='?')
				{
					int sh=temp>>count-1-tm;
					tm++;
					int ch=sh&1;
					cout<<ch;
				}
				else
				{
					cout<<str[k];
				}
			}
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}