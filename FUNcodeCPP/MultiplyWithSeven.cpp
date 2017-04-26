#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter A Number To Be Multiplied With Seven : ";
    cin>>num;
    cout<<"Result Is : "<<((num<<3)-num)<<endl; // shift 2= 4*num ...and so on
    return 0;
}
