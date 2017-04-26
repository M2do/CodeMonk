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
		int num;
		cin>>num;
		for(int i=1;i<=num;i++)
		{
			list < int > myList;
			int temp=i;
			while(temp!=0)
			{
				int digit=temp&1;
				myList.push_front(digit);
				temp>>=1;
			}
			for(list < int > :: iterator it=myList.begin();it!=myList.end();it++)
			{
				cout<<*it;
			}
			myList.clear();
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}