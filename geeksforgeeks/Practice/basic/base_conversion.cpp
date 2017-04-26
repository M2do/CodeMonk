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

void decimalToHexadecimal(int ldecnum)
{
	if(ldecnum<16)
	{
		if(ldecnum==10)
		{
			cout<<"A";
			return;
		}
		if(ldecnum==11)
		{
			cout<<"B";
			return;
		}
		if(ldecnum==12)
		{
			cout<<"C";
			return;
		}
		if(ldecnum==13)
		{
			cout<<"D";
			return;
		}
		if(ldecnum==14)
		{
			cout<<"E";
			return;
		}
		if(ldecnum==15)
		{
			cout<<"F";
			return;
		}
		cout<<ldecnum;
		return;
	}
	int rem=ldecnum%16;
	decimalToHexadecimal(ldecnum/16);
	if(rem==10)
		{
			cout<<"A";
			return;
		}
		if(rem==11)
		{
			cout<<"B";
			return;
		}
		if(rem==12)
		{
			cout<<"C";
			return;
		}
		if(rem==13)
		{
			cout<<"D";
			return;
		}
		if(rem==14)
		{
			cout<<"E";
			return;
		}
		if(rem==15)
		{
			cout<<"F";
			return;
		}
		cout<<rem;
		return;

}

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int num;
		cin>>num;
		string binaryNum;
		cin>>binaryNum;
		int ldecnum;
		cin>>ldecnum;
		//decimalToHexadecimal(ldecnum);
		string hexnum;
		cin>>hexnum;
		int decnum=0;
		int len1=hexnum.length();
		for(int i=0;i<len1;i++)
		{
			if(hexnum[i]>=65&&hexnum[i]<=90)
			{
				decnum+=(hexnum[i]-55)*pow(16,len1-1-i);
			}
			else
			{
				decnum+=(hexnum[i]-48)*pow(16,len1-1-i);
			}
		}
		int len=binaryNum.length();
		int decimalNum=0;
		for(int i=0;i<len;i++)
		{
			decimalNum+=(binaryNum[i]-48)*pow(2,len-1-i);
		}
		int arr[200];
		int i=0;
		while(num>0)
		{
			arr[i++]=num%2;
			num/=2;
		}
		//cout<<"Decimal to Binary : ";  //decimal to binary
		for(int j=i-1;j>=0;j--)
		{
			cout<<arr[j];
		}
		cout<<" ";
		//cout<<"\nBinary to Decimal : "<<decimalNum; //binary to decimal
		cout<<decimalNum<<" ";
		//cout<<"\nDecimal to hexadecimal : ";
		decimalToHexadecimal(ldecnum);
		cout<<" ";
		//cout<<"\nHexadecimal to decimal : "<<decnum; //hexadecimal to decimal
		cout<<decnum<<" ";
		cout<<endl;

	}

	return 0;
}