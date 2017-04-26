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
		string bnum;
		cin>>bnum;
		int len=bnum.length();
		int decnum=0;
		int j=0;
		for(int i=len-1;i>=0;i--)
		{
			int digit=bnum[i]-48;
			decnum+=digit*pow(2,j++);
		}
		cout<<decnum<<endl;
	}
	return 0;
}