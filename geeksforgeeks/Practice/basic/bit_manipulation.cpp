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
bool areOpp(int x,int y)
{
	return ((x^y)); //for two num having opposite sign
}

int xoreBit(int num1,int num2)
{
	int res=0;
	for(int i=7;i>=0;i--)
	{
		bool b1=num1&(1<<i);
		bool b2=num2&(1<<i);
		bool xorebit=(b1&b2)?0:(b1|b2);
		res<<=1;
		res|=xorebit;
	}
	return res;
}
bool isEven(int num)
{
	int mask=1;
	int f=(num&mask);
	if(f==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int multTwo(int num4)
{
	int num=num4<<1;
	return num;
}
int main()
{

	int x,y;
	cout<<"Enter two numbers (checks if they have opposite sign): ";
	cin>>x>>y;
	if(areOpp(x,y))
	{
		cout<<"They have opposite sign"<<endl;
	}
	else
	{
		cout<<"They have same sign"<<endl;
	}
	int num1,num2;
	cout<<"Enter two numbers (to find their XOR): ";
	cin>>num1>>num2;
	cout<<"XOR is "<<xoreBit(num1,num2)<<endl;
	int num3;
	cout<<"Enter a number (Checks even or odd) : ";
	cin>>num3;
	if(isEven(num3))

	{
		cout<<"THe number is Even"<<endl;
	}
	else
	{
		cout<<"The number is Odd"<<endl;
	}
	int num4;
	cout<<"Enter a number (to multiply by 2 ) : ";
	cin>>num4;
	cout<<"The number twice of "<<num4<<" is "<<multTwo(num4)<<endl;
	return 0;
}