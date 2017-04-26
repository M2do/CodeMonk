#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string num;
        cin>>num;
        for(int i=0;i<num.length();i++)
        {
            char pick=num[i];
            if(pick!=num[i+1])
            {
                cout<<num[i];
            }
        }
        cout<<endl;
    }
	return 0;
}