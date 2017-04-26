/*sample input
  0 21
  */
#include <bits/stdc++.h>
using namespace std;
bool isSteppingNumber(int num)
{
    int prevDigit = num%10;
    num/=10;
    while(num>0)
    {
        int digit = num%10;
        if(abs(prevDigit - digit)!=1)
        {
            return false;
        }
        num/=10;
        prevDigit = digit;
    }
    return true;
}
void getSteppingNumbers(int m,int n)
{
    for(int i=m;i<=n;i++)
    {
        if(isSteppingNumber(i))
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int m,n;
    cin>>m>>n;       //taking m and n as input [m,n]
    getSteppingNumbers(m,n);
    return 0;
}
