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
int getnum(int num)
{
	int pos=ceil(log2(num));
	int num2=1<<pos;
	return num2;
}
int getnum2(int num)
{
	int pos=0;
	while(num>0)
	{
		pos++;
		num>>=1;
	}
	return 1<<pos;
}
int getnum3(int num)
{
	int newnum=1;
	while(newnum<num)
	{
		newnum<<=1;
	}
	return newnum;
}
int getnum4(int num)
{
	int newnum=num-1;
	newnum=newnum|newnum>>1;
	newnum=newnum|newnum>>2;
	newnum=newnum|newnum>>4;
	newnum=newnum|newnum>>8;
	newnum=newnum|newnum>>16;
	return newnum+1;
}
int main()
{
	int num;
	cout<<"Enter a positive integer number : ";
	cin>>num;

	cout<<"Method 1 begins "<<endl;
	cout<<"Smallest number greater than or equal to "<<num<<" and power of 2 "<<" is : "<<getnum(num)<<endl;

	cout<<"Method 2 begins "<<endl;
	cout<<"Smallest number greater than or equal to "<<num<<" and power of 2 "<<" is : "<<getnum2(num)<<endl;

	cout<<"Method 3 begins "<<endl;
	cout<<"Smallest number greater than or equal to "<<num<<" and power of 2 "<<" is : "<<getnum3(num)<<endl;

	cout<<"Method 4 begins "<<endl;
	cout<<"Smallest number greater than or equal to "<<num<<" and power of 2 "<<" is : "<<getnum4(num)<<endl;

	return 0;
}