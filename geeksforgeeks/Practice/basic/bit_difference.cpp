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

int countFlip(long long int A,long long int B)
{
	int count=0;
	for(int i=31;i>=0;i--)
	{
		int Abit=A&1<<i;
		int Bbit=B&1<<i;
		if((Abit^Bbit))
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		long long int A,B;
		cin>>A>>B;
		cout<<countFlip(A,B)<<endl;
	}
	return 0;
}