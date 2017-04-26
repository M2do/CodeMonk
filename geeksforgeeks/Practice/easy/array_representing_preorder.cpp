#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <iterator>
#define INT_MIN -10000000

using namespace std;

vector < int > vec;

bool arrPreorder(int arr[],int size)
{
	vec.push_back(arr[0]);
	int root=INT_MIN;
	for(int i=0;i<size;i++)
	{
		if(arr[i]<root)
		{
			return false;
		}
		while(vec.back()<arr[i]&&vec.size()!=0)
		{
			root=vec.back();
			vec.pop_back();
		}
		vec.push_back(arr[i]);
	}
	vec.clear();
	return true;

}

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int size;
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		arrPreorder(arr,size)?cout<<"1"<<endl:cout<<"0"<<endl;
	}
	return 0;
}