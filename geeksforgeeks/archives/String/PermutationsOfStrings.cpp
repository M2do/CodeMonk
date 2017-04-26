#include <bits/stdc++.h>
using namespace std;
void swap(char* a,char* b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}
void getPermutations(char* str,int l,int h)
{
	if(l == h)
	{
		cout<<str<<endl;
		return;
	}
	for(int i=l;i<=h;i++)
	{
		swap(&str[l],&str[i]);
		getPermutations(str,l+1,h);
		swap(&str[l],&str[i]);
	}

}
int main()
{
	char str[] = "BALO";
	getPermutations(str,0,strlen(str)-1);
	return 0;
}