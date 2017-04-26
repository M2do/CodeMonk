#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <numeric>
using namespace std;
void sumDigits(int num)
{
	if(num/10<1)
	{
		cout<<num;
	}
	else
	{
		int sum=0;
		while(num>0)
		{
			int digit=num%10;
			sum+=digit;
			num=num/10;
		}
		sumDigits(sum);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int num;
		cin>>num;
		sumDigits(num);
		cout<<endl;
	}
	return 0;
}