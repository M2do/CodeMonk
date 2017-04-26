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
		string name;
		cin>>name;
		int len=name.length();
		int x=0;
		int y=0;
		for(int i=0;i<len;i++)
		{
			if(name[i]=='E')
			{
				x+=1;
			}
			if(name[i]=='W')
			{
				x+=-1;
			}
			if(name[i]=='N')
			{
				y+=1;
			}
			if(name[i]=='S')
			{
				y+=-1;
			}
		}
		//cout<<x<<","<<y<<endl;
			if(x>0)
			{
				while(x>0)
				{
					cout<<"E";
					x+=-1;
				}
				if(y>=0)
				{
					while(y>0)
					{
						y+=-1;
						cout<<"N";
					}
				}
				else
				{
					while(y<0)
					{
						y+=1;
						cout<<"S";
					}
				}
			}
			else
			{
				
				if(y>0)
				{
					while(y>0)
					{
						y+=-1;
						cout<<"N";
					}
				}
				else
				{
					while(y<0)
					{
						y+=1;
						cout<<"S";
					}
				}
				while(x<0)
				{
					cout<<"W";
					x+=1;
				}
		    }
		cout<<endl;
	}
	return 0;
}