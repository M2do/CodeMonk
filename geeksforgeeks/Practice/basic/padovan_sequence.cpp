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

long long int padovan(int num)
{
	if(num==0||num==1||num==2)
	{
		return 1;
	}
	else
	{
		return padovan(num-2)+padovan(num-3);
	}
}

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int num;
		cin>>num;
		cout<<padovan(num)%1000000007<<endl;
	}
}
