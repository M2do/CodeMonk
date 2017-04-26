#include <bits/stdc++.h>
using namespace std;
void swap(char* a,char* b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
void getPermutations(char name[],int l,int h)
{
    if(l == h)
    {
        cout<<name<<endl;
        return;
    }
    for(int i=l;i<=h;i++)
    {
        swap(&name[l],&name[i]);
        getPermutations(name,l+1,h);
        swap(&name[l],&name[i]);
    }
}
int main()
{
    char name[]="ABC";
    cout<<"All possible combinations of the word "<<name<<" are :"<<endl;
    int len = strlen(name)-1;
    getPermutations(name,0,len);
    return 0;
}
