#include <bits/stdc++.h>
using namespace std;
void swap(char *ch1,char* ch2)
{
    char temp=*ch1;
    *ch1=*ch2;
    *ch2=temp;
}
void permute(char* str,int l,int h)
{
    if(l==h)
    {
        cout<<str<<endl;
    }
    for(int i=l;i<=h;i++)
    {
        swap(&str[l],&str[i]);
        permute(str,l+1,h);
        swap(&str[l],&str[i]);
    }
}
int main()
{
    char str[]="ABC";
    int len=strlen(str);
    permute(str,0,len-1);
    return 0;
}
