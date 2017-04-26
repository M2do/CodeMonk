#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

int mini(int a,int b)
{
	return a<b?a:b;	
}
int getangle(int hr,int min)
{
	float hra=0.5*(60*hr+min);
	float mina=6*min;
	int angle=abs(hra-mina);
	return mini(360-angle,angle);
}

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int hr,min;
		cin>>hr>>min;
		cout<<getangle(hr,min)<<endl;
	}
	return 0;
}