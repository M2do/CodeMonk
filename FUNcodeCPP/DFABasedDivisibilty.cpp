#include <bits/stdc++.h>
using namespace std;
void makeTable(int *tab,int div)
{
    int state0;
    int state1;
    for(int state=0;state<div;state++)
    {
        state0=state<<1;
        *((tab+state*2)+0)=(state0<div)?state0:state0-div;
        state1=(state<<1)+1;
        *((tab+state*2)+1)=(state1<div)?state1:state1-div;
    }
    cout<<"Table Obtained is : "<<endl;
    for(int i=0;i<div;i++)
    {
        cout<<"from state = "<<i<<" --> ";
        cout<<*((tab+i*2)+0)<<" "<<*((tab+i*2)+1)<<endl;
    }

}
void getDfaReminderUtil(int num,int* state,int* tab)
{
    if(num!=0)
    {
        getDfaReminderUtil(num>>1,state,tab); 
        *state=*((tab+*(state)*2)+(num&1)); 
    }
}
int getDfaReminder(int num,int div)
{
    int tab[div][2];
    makeTable((int*)tab,div);
    int state=0;
    getDfaReminderUtil(num,&state,(int*)tab);
    return state;
}
int main()
{
    int div;
    cout<<"Enter Divisor : ";
    cin>>div;
    cout<<"Enter 0 To Terminate else Enter Numbers \nOne by one to test Divisibility by "<<div<<endl;
    while(true)
    {
        int num;
        cin>>num;
        if(num==0)
        {
            break;
        }
        int rem=getDfaReminder(num,div);
        if(rem==0)
        {
            cout<<"Reminder is 0 ,hence divisible by "<<div<<endl;
        }
        else
        {
            cout<<"Reminder is "<<rem<<",hence not divisible by "<<div<<endl;
        }
    }
    return 0;
}
