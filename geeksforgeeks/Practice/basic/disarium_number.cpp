#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;
bool isDisarium(string num)
{
	int len=num.length();
	int sum=0;
	int anum=0;
	int it=0;
	for(int i=len-1;i>=0;i--)
	{
		int digit=num[i]-'0';
		anum+=digit*pow(10,it);
		it++;
		sum+=pow(digit,i+1);
	}
	if(anum==sum)
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
		cin>>num;
		isDisarium(num)?cout<<"1":cout<<"0";
		cout<<endl;
	}
}