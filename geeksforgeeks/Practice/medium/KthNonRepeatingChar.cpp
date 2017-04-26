#include <bits/stdc++.h>
using namespace std;
#define size 256
int getChar(string str,int k)
{
	int index[size];
	int count[size];
	int len = str.length();
	for(int i=0;i<size;i++)
	{
		index[i] = len-1;
	}
	for(int i=0;i<str.length();i++)
	{
		count[str[i]] = 0;
	}
	for(int i=0;i<str.length();i++)
	{
		char ch = str[i];
		count[ch]++;
		if(count[ch] == 1)
		{
			index[ch] = i;
		}
		if(count[ch] == 2)
		{
			index[ch] = len-1;
		}
	}
	sort(index,index+size);
	return index[k-1];
}
int main()
{
	string str;
	int k;
	cout<<"Enter string : ";
	cin>>str;
	cout<<"Enter value of k : ";
	cin>>k;
	int index = getChar(str,k);
	if(index!=256)
	{
		cout<<"Kth non-repeating character is : "<<str[index]<<endl;
	}
	else
	{
		cout<<"All characters are repeating"<<endl;
	}
	return 0;
}