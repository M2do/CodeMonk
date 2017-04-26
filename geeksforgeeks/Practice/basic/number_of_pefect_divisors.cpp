#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int count=0;
		int num;
		cin>>num;
		int i=1;
		while(true)
		{
			int div=i*i;
			if(num%div==0)
			{
				count++;
			}
			if(div>num)
			{
				break;
			}
			i++;
		}
		cout<<count<<endl;
	}
	return 0;
}