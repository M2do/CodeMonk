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
void getSieve(unsigned int num)
{
	vector < int > numbers(num+1,true);
	for(int i=2;i*i<=num;i++)
	{
		if(numbers[i]==true)
		{
			numbers[i]==false;
			for(int k=2*i;k<=num;k+=i)
			{
				numbers[k]=false;
			}
		}
	}
	int count=0;
	for(int i=2;i<=sqrt(num);i++)
	{
		if(numbers[i]==true)
		{
			count++;
		}
	}
	cout<<count<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int num;
		cin>>num;
		getSieve(num);
	}
	return 0;
}