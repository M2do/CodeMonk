#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int findRemin(string name)
{
   int len=name.length();
   int arr[6]={1,3,2,-1,-3,-2};
   int index=0;
   int result=0;
   for(int i=len-1;i>=0;i--)
   {
      int digit=name[i]-'0';
      int mult=arr[index];
      result+=mult*digit;
      index=(index+1)%6;
      result=result%7;
      if(result<0)
      {
         result=(result+7)%7;
      }

   }
   return result;
}

int main()
{
   int t;
   cin>>t;
   while(t-->0)
   {
      string name;
      cin>>name;
      int rem=findRemin(name);
      cout<<rem<<endl;
   }
   return 0;
}