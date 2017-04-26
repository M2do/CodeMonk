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

void minHeapify(int arr[],int n,int idx)
{
	int min=idx;
	int l=2*idx+1;
	int r=2*idx+2;
	if(l<n&&arr[l]<arr[min])
	{
		min=l;
	}
	if(r<n&&arr[r]<arr[min])
	{
		min=r;
	}
	if(min!=idx)
	{
		swap(arr[min],arr[idx]);
		minHeapify(arr,n,min);
	}

}
void heapSort(int arr[],int n)
{
	for(int i=n/2-1;i>=0;i--)
	{
		minHeapify(arr,n,i);
	}
	for(int i=n-1;i>=0;i--)
	{
		swap(arr[0],arr[i]);
		minHeapify(arr,i,0);
	}
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
	heapSort(arr,n);
	cout<<"After  Sorting the array : ";
	for(int i=n-1;i>=0;i--)
	{
		cout<<setw(4)<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}