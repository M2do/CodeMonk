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
		int num;
		cin>>num;
		cout<<floor(cbrt(num))<<endl;
	}
	return 0;
}