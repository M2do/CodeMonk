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
 
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int num;
		cin>>num;
		if(num/100<1)
		{
			cout<<"Number should be atleast three digits"<<endl;
			continue;
		}
		int num2=num*2;
		int num3=num*3;
		int arr[200];
		int i=0;
		while(num>0)
		{
			int  digit=num%10;
			arr[i++]=digit;
			num/=10;
		}
		while(num2>0)
		{
			int  digit=num2%10;
			arr[i++]=digit;
			num2/=10;
		}
		while(num3>0)
		{
			int  digit=num3%10;
			arr[i++]=digit;
			num3/=10;
		}
		//cout<<i<<endl;
		if(i!=9)
		{
			/*
			sort(arr,arr+i);
			
			for(int j=0;j<i;j++)
			{
				cout<<arr[j]<<" ";
			}
			cout<<endl;
			*/
			cout<<"Not Fascinating"<<endl;
			continue;
		}
		else
		{
			sort(arr,arr+9);
			/*
			for(int j=0;j<9;j++)
			{
				cout<<arr[j]<<" ";
			}
			cout<<endl;
			*/
			int j=0;
			for(j=0;j<8;j++)
			{
				if(arr[j+1]-arr[j]!=1)
				{
					cout<<"Not Fascinating"<<endl;
					break;
				}
			}
			if(j==8)
			{
				cout<<"Fascinating"<<endl;
			}
		}
	}
}
