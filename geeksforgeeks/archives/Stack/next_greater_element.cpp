#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <iterator>
using namespace std;

vector < int > vec;

void printNext(int arr[],int size)
{
	vec.push_back(arr[0]);
	for(int i=1;i<size;i++)
	{
		int next=arr[i];
		while(vec.back()<next&&vec.size()!=0)
		{
			cout<<vec.back()<<" --> "<<next<<endl;
			vec.pop_back();
		}
		if(vec.size()==0||vec.back()>next)
		{
			vec.push_back(next);
		}
	}
	while(vec.size()!=0)
	{
		cout<<vec.back()<<" --> "<<"-1"<<endl;
		vec.pop_back();
	}
	vec.clear();
	return;
}


int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	printNext(arr,size);
	return 0;
}