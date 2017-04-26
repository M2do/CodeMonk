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
	for(i=0;i<str.length();i++)
	{
		if(str[i] = 1)
		{
			return str[i];
		}
	}
	return 'z';
}
int main()
{
	string str;
	cout<<"Enter String : ";
	cin>>str;
	cout<<"first non-repeating character  : "<<getChar(str);
	return 0;
}
