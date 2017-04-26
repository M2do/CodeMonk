#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
bool isDisarium(string num)
{
	int len=num.length();
	int sum=0;
	for(int i=len-1;i>=0;i--)
	{
		int digit=num[i]-'0';
		sum+=pow(digit,i+1);
	}
	if(atoi(num)==sum)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		string num;
		isDisarium(num)?cout<<"1":cout<<"0"<<endl;
	}
}