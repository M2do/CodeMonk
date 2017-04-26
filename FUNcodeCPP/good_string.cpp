#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int imap(char ch)
{
	if(ch-'a'>13)
		return ch-13;
	else
		return ch;
}

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		//string name;
		//cin>>name;
		int check=0;
		//int len=name.length();
		cout<<imap('a')<<endl;
		cout<<imap('z')<<endl;
		/*
		for(int i=0;i<n-1;i++)
		{
			if(imap(name[i])!=imap(name[i+1]))
			{
				check=1;
				break;
			}
		}
		if(check==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}*/
	}
}