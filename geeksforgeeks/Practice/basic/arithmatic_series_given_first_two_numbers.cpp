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
		int f,s;
		cin>>f>>s;
		int d=s-f;
		int n;
		cin>>n;
		cout<<(f+(n-1)*d)<<endl;
	}
	return 0;
}