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
		int num;
		cin>>num;
		int count=0;
		int temp=num;
		while(temp>0)
		{
			count++;
			temp/=10;
		}
		int large=pow(num,2);
		int newnum=0;
		int i=0;
		while(i<count)
		{
			int digit=large%10;
			large/=10;
			newnum+=digit*pow(10,i);
			i++;
		}
		if(newnum==num)
		{
			cout<<"Automorphic"<<endl;
		}
		else
		{
			cout<<"Not Automorphic"<<endl;
		}
	}
	return 0;
}