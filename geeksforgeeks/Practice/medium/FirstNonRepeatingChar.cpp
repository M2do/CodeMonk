#include <bits/stdc++.h>
using namespace std;
#define size 256
struct countIndex
{
	int Findex;
	int count;
};
countIndex* getCountIndex(string str)
{
	countIndex* temp = new countIndex[size];
	for(int i=0;i<str.length();i++)
	{
		temp[str[i]].count++;
		if(temp[str[i]].count == 1)
		{
         	temp[str[i]].Findex = i;
		}
	}
	return temp;
}
int getChar(string str)
{
	countIndex* count= getCountIndex(str);
	int result = INT_MAX;
	for(int i=0;i<size;i++)
	{
		if(count[i].count == 1&&count[i].Findex<=result)
		{
			result = count[i].Findex;
		}
	}
	free(count);
	return result;
}
int main()
{
	string str;
	cout<<"Enter string : ";
	cin>>str;
	int index = getChar(str);
	if(index == INT_MAX)
	{
		cout<<"Either all characters are repeating or string is empty"<<endl;
	}
	else
	{
		cout<<"The fist non-repeating character is  : "<<str[index]<<endl;
	}
	return 0;
}