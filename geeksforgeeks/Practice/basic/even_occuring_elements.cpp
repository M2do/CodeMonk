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
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		vector < int > vec(arr,arr+n);
		vector < int > vect;
		//sort(vec.begin(),vec.end());
		for(int i=0;i<vec.size();i++)
		{
			int ti=count(vec.begin(),vec.end(),arr[i]);
			//cout<<setw(4)<<vec[i]<<" : "<<setw(4)<<ti<<endl;
			if(ti%2==0)
			{
				if(find(vect.begin(),vect.end(),arr[i])==vect.end())
				{
					cout<<arr[i]<<" ";
					vect.push_back(arr[i]);
				}

			}
		}
		cout<<endl;
	}
}
