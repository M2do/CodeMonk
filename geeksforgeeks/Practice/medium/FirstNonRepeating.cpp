#include <bits/stdc++.h>
using namespace std;
#define size 200
char getChar(string str)
{
	int arr[size];
	for(int i=0;i<str.length();i++)
	{
		arr[str[i]] = 0;
	}
	for(int i=0;i<str.length();i++)
	{
		arr[str[i]]++;
	}
	for(int i=0;i<str.length();i++)
	{
		if(arr[str[i]] == 1)
		{
			return str[i];
		}
	}
	return '$';
}
int main()
{
	string str;
	cout<<"Enter String : ";
	cin>>str;
	char ch = getChar(str);
	if(ch!='$')
	{
		cout<<"first non-repeating character  : "<<ch<<endl;
	}
	else
	{
		cout<<"All characters are repeating"<<endl;
	}
	return 0;
}
