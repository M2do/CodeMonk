#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
vector < int > vec;

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
		vec.push_back(arr[0]);
		for(int i=1;i<size;i++)
		{
			while(vec.back()<arr[i]&&vec.size()!=0)
			{
				cout<<"next greater number of "<<setw(4)<<vec.back()<<" is "<<setw(4)<<arr[i]<<endl;
				vec.pop_back();
			}
			vec.push_back(arr[i]);
		}
		while(vec.size()!=0)
		{
			cout<<"next greater number of "<<setw(4)<<vec.back()<<" is "<<setw(4)<<"-1"<<endl;
			vec.pop_back();
		}

	}
	return 0;
}