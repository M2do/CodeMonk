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

list < int > myList;
list < int > :: iterator it;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		string numa,numb;
		cin>>numa>>numb;
		int lena=numa.length();
		int lenb=numb.length();
		int starta=lena-1;
		int startb=lenb-1;
		int cary=0;
		while(starta>=0&&startb>=0)
		{
			int fdigit=numa[starta]-48;
			int sdigit=numb[startb]-48;
			int sum=fdigit+sdigit+cary;
			if(sum>=10)
			{
				cary=1;
				myList.push_front(sum%10);
			}
			else
			{
				cary=0;
				myList.push_front(sum);
			}
			starta--;
			startb--;
		}
		while(starta>=0)
		{
			int digit=numa[starta]-48;
			int sum=digit+cary;
			if(sum>=10)
			{
				cary=1;
				myList.push_front(sum%10);
			}
			else
			{
				cary=0;
				myList.push_front(sum);
			}
			starta--;
		}
		while(startb>=0)
		{
			int digit=numb[startb]-48;
			int sum=digit+cary;
			if(sum>=10)
			{
				cary=1;
				myList.push_front(sum%10);
			}
			else
			{
				cary=0;
				myList.push_front(sum);
			}
			startb--;
		}
		if(cary==1)
		{
			myList.push_front(1);
		}
		for(it=myList.begin();it!=myList.end();it++)
		{
			cout<<*it;
		}
		myList.clear();
		cout<<endl;
	}
	return 0;
}