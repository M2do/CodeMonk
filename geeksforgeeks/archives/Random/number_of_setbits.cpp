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

int getBits(int num)
{
	int count=0;
	while(num>0)
	{
		count+=num&1;
		num>>=1;
	}
	return count;
}

int getBits1(int num)
{
	int count=0;
	while(num>0)
	{
		num&=(num-1);
		count++;
	}
	return count;
}

int main()
{
	int num;
	cout<<"Enter a positive integer number : ";
	cin>>num;
	cout<<"Method 1 begins "<<endl;
	cout<<"Number of set bits : "<<getBits(num)<<endl;

	cout<<"Method 2 begins "<<endl;
	cout<<"Number of set bits : "<<getBits1(num)<<endl;

	return 0;
}