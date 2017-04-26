#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <utility>
#include <iomanip>
#include <numeric>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <functional>
using namespace std;

pair < int ,int > myPair;
vector < pair < int , int > > vec;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int num;
		cin>>num;
		for(int i=1;i<=num;i++)
		{
			int x=i;
			int y=floor(num/x);
			myPair=make_pair(x,y);
			vec.push_back(myPair);
		}
		int pro=0;
		for(int i=0;i<vec.size();i++)
		{
			pro+=(vec[i].first)*(vec[i].second);
		}
		vec.clear();
		cout<<pro<<endl;
	}
	return 0;
}