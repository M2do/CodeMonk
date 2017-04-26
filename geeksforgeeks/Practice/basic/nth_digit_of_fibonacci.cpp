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
using namespace std;               //this code doesn't run because machine not c-11 compatible
                                   //to_string methods of string object is not recognised by compiler

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int num;
		cin>>num;
		string str="011";
		unsigned long long int arr[100];
		arr[1]=1;
		arr[2]=1;
		for(int i=3;i<=20;i++)
		{
			arr[i]=arr[i-1]+arr[i-2];
			string newstr=to_string(arr[i]);
			str+=newstr;
		}
		cout<<str[num]<<endl;
		str.clear();
	}
	return 0;
}