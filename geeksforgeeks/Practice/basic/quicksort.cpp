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

int getIndex(int arr[],int l,int h)
{
	int pivot=arr[h];
	int j=l;
	for(int i=l;i<h;i++)
	{
		if(arr[i]<pivot)
		{
			swap(arr[i],arr[j]);
			j++;
		}
	}
	swap(arr[j],arr[h]);
	return j;
}

void quickSort(int arr[],int l,int h)
{
	if(l>h)
	{
		return;
	}
	int idx=getIndex(arr,l,h);
	quickSort(arr,l,idx-1);
	quickSort(arr,idx+1,h);
}

int main()
{
	int n=8;
	int arr[]={23,65,43,78,21,86,34,69};
	cout<<"Before Sorting the array : ";
	for(int i=0;i<n;i++)
	{
		cout<<setw(4)<<arr[i]<<" ";
	}
	cout<<endl;
	quickSort(arr,0,n-1);
	cout<<"After  Sorting the array : ";
	for(int i=0;i<n;i++)
	{
		cout<<setw(4)<<arr[i]<<" ";
	}
	cout<<endl;
    n=10;
	int arrs[]={10 ,9 ,8 ,7 ,6 ,5 ,4 ,3 ,2 ,1};
	cout<<"Before Sorting the array : ";
	for(int i=0;i<n;i++)
	{
		cout<<setw(4)<<arrs[i]<<" ";
	}
	cout<<endl;
	quickSort(arrs,0,n-1);
	cout<<"After  Sorting the array : ";
	for(int i=0;i<n;i++)
	{
		cout<<setw(4)<<arrs[i]<<" ";
	}
	cout<<endl;
	return 0;
}