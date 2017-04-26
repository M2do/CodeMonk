#include <bits/stdc++.h>
using namespace std;
/*
If it is appended by 0 it will become 10 (2 in decimal) means 2 times of the previous value.
If it is appended by 1 it will become 11(3 in decimal), 2 times of previous value +1.
*/
int main()
{
    int div;
    cout<<"Enter Diviser : ";
    cin>>div;
    cout<<"Press Any Number Other Than 0 or 1 To Terminate"<<endl;
    int num=0;
    while(true)
    {
        int bitNum;
        cin>>bitNum;
        if(bitNum==1)
        {
            num=(num*2+1);
        }
        else if(bitNum==0)
        {
            num=num*2;
        }
        else
        {
            break;
        }
        if(num%div==0&&bitNum==1)
        {
            cout<<"Number Formed So Far is "<<num<<" And It Is Divisible By "<<div<<endl;
        }
        else
        {
            cout<<"Number Formed So Far is "<<num<<" And It Is Not Divisible By "<<div<<endl;
        }
    }
    return 0;
}
