#include <iostream>
#include <cstdlib>
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

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int size1;
		int size2;
		cin>>size1>>size2;
		int arr1[size1];
		int arr2[size2];
		for(int i=0;i<size1;i++)
		{
			cin>>arr1[i];
		}
		for(int i=0;i<size2;i++)
		{
			cin>>arr2[i];
		}
		vector < int > fvec(arr1,arr1+size1);
		vector < int > svec(arr2,arr2+size2);
		vector < int > lookup;
		sort(fvec.begin(),fvec.end());
		for(int i=0;i<size1;i++)
		{
			int pick=fvec[i];
			if(find(svec.begin(),svec.end(),pick)!=svec.end()&&find(lookup.begin(),lookup.end(),pick)==lookup.end())
			{
				lookup.push_back(pick);
			}
		}
		if(lookup.size()==0)
		{
			cout<<"Zero"<<;
		}
		else
		{
			for(int i=0;i<lookup.size();i++)
			{
				cout<<lookup[i]<<" ";
			}
		}
		fvec.clear();
		svec.clear();
		lookup.clear();
		cout<<endl;
	}
	return 0;
}