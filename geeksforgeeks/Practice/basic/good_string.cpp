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
		return 'z'-ch+1;
	else
		return ch-'a';
}

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		string name;
		cin>>name;
		int check=0;
		int len=name.length();
	    cout<<imap('b')<<endl;
	    cout<<imap('c')<<endl;
		for(int i=0;i<len-1;i++)
		{
			if(abs(imap(name[i+1])-imap(name[i]))>1||(imap(name[i+1])-imap(name[i])==0))
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
		}
	}
}