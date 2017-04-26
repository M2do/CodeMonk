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


void bubbleSort(int arr[],int n,int mark[],float avmark)
{
	int swa[n]={0};
	for(int i=0;i<n-1;i++)
	{
		for(int j=1;j<n-i;j++)
		{
			if(arr[j-1]>arr[j])
			{
				int temp=swa[j-1];
				swa[j-1]=swa[j]+1;
				swa[j]=temp+1;
				swap(arr[j-1],arr[j]);
			}
		}
	}
	/*
	cout<<"Number of swaps : ";
	for(int i=0;i<n;i++)
	{
		cout<<swa[i]<<" ";
	}
	cout<<endl;
	cout<<"Initial marks : ";
	for(int i=0;i<n;i++)
	{
		cout<<mark[i]<<" ";
	}
	cout<<endl;
	*/
	int fsum=0;
	for(int i=0;i<n;i++)
	{
		fsum+=mark[i]-swa[i];
	}
	float avfsum=fsum/n;
	//cout<<"average after sum : "<<avfsum<<endl;
	if(avfsum<avmark)
	{
		cout<<"0"<<endl;
	}
	else
	{
		cout<<"1"<<endl;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int n;
		cin>>n;
		float avmark;
		cin>>avmark;
		int seatarr[n];
		int mark[n];
		for(int i=0;i<n;i++)
		{
			cin>>seatarr[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>mark[i];
		}
		bubbleSort(seatarr,n,mark,avmark);
	}

	return 0;
}