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
	int num;
	cout<<"Enter the number upto which prime numbers are to be displayed : ";
	cin>>num;
	bool arr[num+1];
	for(int i=0;i<=num;i++)
	{
		arr[i]=true;
	}
	int i=2;
	int j=0;
	while(pow(i,2)+i*j<=num)
	{
		while(pow(i,2)+i*j<=num)
		{
			int idx=pow(i,2)+i*j;
			arr[idx]=false;
			j++;
		}
		/*
		cout<<"for i = "<<i<<endl;
		for(int k=0;k<=num;k++)
		{
			cout<<arr[k]<<" ";
		}
		cout<<endl;*/
	   //cout<<"Enter the number : "
		j=0;
		for(int k=i+1;k<=num;k++)
		{
			if(arr[k]==true)
			{
			//	cout<<i<<endl;
			//	arr[k]=false;
				i=k;
				break;
			}
		}
	}
	cout<<"\nThe prime numbers present upto "<<num<<" are : "<<endl;
	for(int k=2;k<=num;k++)
	{
		if(arr[k]==true)
		{
			cout<<setw(4)<<k<<endl;
		}
	}
	cout<<endl;
	return 0;

}