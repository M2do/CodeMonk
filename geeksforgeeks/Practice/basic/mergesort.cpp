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

void merge(int arr[], int l,int mid,int h)
{

	int n1=mid-l+1;
	int n2=h-mid;
	int left[n1];
	int right[n2];
	for(int i=0;i<n1;i++)
	{
		left[i]=arr[l+i];
	}
	for(int i=0;i<n2;i++)
	{
		right[i]=arr[mid+1+i];
	}

    int i=0;
    int j=0;
    int k=0;
    while(i<n1&&j<n2)
    {
    	if(left[i]<=right[j])
    	{
    		arr[k+l]=left[i];
    		i++;
    		k++;
    	}

    	if(right[j]<left[i])
    	{
    		arr[k+l]=right[j];
    		j++;
    		k++;
    	}
    }

    while(i<n1)
    {
    	arr[k+l]=left[i];
    	i++;
    	k++;
    }
    while(j<n2)
    {
    	arr[k+l]=right[j];
    	j++;
    	k++;
    }
}

void mergeSort(int arr[],int l,int h)
{
	if(l>=h)
	{
		return;
	}
	int mid=l+(h-l)/2;
	mergeSort(arr,l,mid);
	mergeSort(arr,mid+1,h);
	merge(arr,l,mid,h);
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
	mergeSort(arr,0,n-1);
	cout<<"After  Sorting the array : ";
	for(int i=0;i<n;i++)
	{
		cout<<setw(4)<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}