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
	vector < int > vec;
	vector < int > ::iterator it;
	while(t-->0)
	{
		int num;
		cin>>num;
		while(num-->0)
		{
			int num2;
			cin>>num2;
			vec.push_back(num2);
		}
		sort(vec.begin(),vec.end());
		if(*vec.begin()==0)
		{
			cout<<"0"<<endl;
		}
		else
		{
			cout<<"1"<<endl;
		}
		vec.clear();
	}
	return 0;
}