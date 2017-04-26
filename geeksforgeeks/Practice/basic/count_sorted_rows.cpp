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
		int m,n;
		cin>>m>>n;
		int arr[m][n];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>arr[i][j];
			}
		}
		int count=0;
		for(int i=0;i<m;i++)
		{

			if(arr[i][0]>=arr[i][1])
			{
				int j;
				for(j=0;j<n-1;j++)
				{
					if(arr[i][j]<=arr[i][j+1])
					{
						break;
					}
				}
				if(j==n-1)
				{
					count++;
				}

			}
			else
			{
				int j;
				for(j=0;j<n-1;j++)
				{
					if(arr[i][j]>=arr[i][j+1])
					{
						break;
					}
				}
				if(j==n-1)
				{
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}