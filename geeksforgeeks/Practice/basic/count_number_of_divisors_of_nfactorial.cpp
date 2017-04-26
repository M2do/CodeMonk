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

vector < int > primeNumber;
void getSieve(int num)
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


	for(int i=2;i<=num;i++)
	{
		if(numbers[i]==true)
		{
			primeNumber.push_back(i);
			cout<<i<<" ";
		}
	}
}

int findDivisors(int num)
{
	int result=1;
	for(int i=0;i<primeNumber.size();i++)
	{
		int temp=num;
		int p=primeNumber[i];
		int exp=0;
		while(num>=p)
		{
			exp+=num/p;
			p*=primeNumber[i];
		}
		result*=(exp+1);
	}
	numbers.clear();
	return result;
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
        cout<<endl;
        cout<<findDivisors(num)<<endl;
        primeNumber.clear();
	}
	return 0;
}