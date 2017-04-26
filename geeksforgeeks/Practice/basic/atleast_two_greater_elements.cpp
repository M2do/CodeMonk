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
		vector < int > vec;
		for(int i=0;i<n;i++)
		{
			int num;
			cin>>num;
			vec.push_back(num);
		} 
		vector < int > vect(vec.begin(),vec.end());
		sort(vec.begin(),vec.end());
		
		vector < int > ::iterator it;
		for(it=vect.begin();it!=vect.end();it++)
		{
			if(*it!=*(vec.end()-1)&&*it!=*(vec.end()-2))
			{
				cout<<*it<<" ";
			}
		}
		/*
		for(int i=0;i<n;i++)
		{
			if(vect[i]!=vec[n-1]&&vect[i]!=vec[n-2])
			{
				cout<<vect[i]<<" ";
			}
		}*/
		cout<<endl;

	}
}