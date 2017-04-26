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

vector < char > fvec;
vector < char > svec;

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		string f,s;
		cin>>f>>s;
		int flen=f.length();
		int slen=s.length();
		for(int i=0;i<flen;i++)
		{
			fvec.push_back(f[i]);
		}
		for(int i=0;i<slen;i++)
		{
			svec.push_back(s[i]);
		}
		for(int i=0;i<fvec.size();i++)
		{
			char pick=fvec[i];
			if(find(svec.begin(),svec.end(),pick)==svec.end())
			{
				cout<<pick;
			}
		}
		fvec.clear();
		svec.clear();
		cout<<endl;
	}
	return 0;
}