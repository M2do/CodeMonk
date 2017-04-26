#include<bits/stdc++.h>
//via bit magic
using namespace std;
int main()
{
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    int oddCount=0;
    int evenCount=0;
    int ch=0;
    while(num!=0)
    {
        if((num&1)==1&&ch%2==0)
        {
            evenCount++;
        }
        if((num&1)==1&&ch%2!=0)
        {
            oddCount++;
        }
        num=num>>1;
        ch++;
    }
    if(abs(evenCount-oddCount)%3==0)
    {
        cout<<"The Number You Entered Is Multiple of Three "<<endl;
    }
    else
    {
        cout<<"The Number You Entered Is Not Multiple of Three "<<endl;
    }



}
