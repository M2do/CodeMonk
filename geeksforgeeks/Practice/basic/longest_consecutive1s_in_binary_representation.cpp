#include <iostream>
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
list < int > vec;
list < int > ::iterator it;
void binary(int num)
{
	if(num<=1)
	{
		vec.push_back(num);
		//cout<<num<<" ";
		return;
	}
	int rem=num%2;
	binary(num/2);
	//cout<<rem<<" ";
	vec.push_back(rem);
}

int main()
{

	int t;
	cin>>t;
	while(t-->0)
	{
		int num;
		cin>>num;
		binary(num);
		int arr[vec.size()];/*
		for(it=vec.begin();it!=vec.end();it++)
		{
			cout<<*it<<" ";
		}*/
		int i=0;
		for(it=vec.begin();it!=vec.end();it++)
		{
			arr[i]=*it;
			i++;
		}

		for(int j=0;j<vec.size();j++)
		{
			cout<<arr[j]<<" ";
		}
		cout<<endl;

		int count=0;
		for(int j=0;j<vec.size()-1;j++)
		{
			int count2=0;
			if(arr[j]==1)
			{
				count2++;
				for(int k=j+1;k<vec.size();k++)
				{
					if(arr[k]!=1)
					{
						break;
					}
					count2++;
				}
				if(count2>count)
				{
					count=count2;
				}
			}
		}
		vec.clear();
		cout<<count<<endl;
	}
}