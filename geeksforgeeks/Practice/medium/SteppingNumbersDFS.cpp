#include <bits/stdc++.h>
using namespace std;
void getSteppingNumbers(int low,int high)
{
    int count = 0;
    if(low == 0)
    {
        count=1;
        cout<<0<<" ";
    }
    queue< int > myQueue;
    for(int i=1;i<10;i++)
    {
        myQueue.push(i);
        while(myQueue.size()!=0)
        {
            int lastDigit = myQueue.front()%10;
            if(lastDigit!=0&&lastDigit!=9)
            {
                int biggerNewNumber = myQueue.front()*10+lastDigit+1;
                int smallerNewNumber = myQueue.front()*10+lastDigit-1;
                if(biggerNewNumber>=low&&biggerNewNumber<=high)
                {
                    myQueue.push(biggerNewNumber);
                }
                if(smallerNewNumber>=low&&smallerNewNumber<=high)
                {
                    myQueue.push(smallerNewNumber);
                }
            }
            if(lastDigit == 0)
            {
                int newNumber = myQueue.front()+1;
                if(newNumber>=low&&newNumber<=high)
                {
                    myQueue.push(newNumber);
                }
            }
            if(lastDigit == 9)
            {
                int newNumber = myQueue.front()*10+8;
                if(newNumber>=low&&newNumber<=high)
                {
                    myQueue.push(newNumber);
                }
            }
            if(myQueue.front()>=low&&myQueue.front()<=high)
            {
                cout<<myQueue.front()<<" ";
                count++;
            }
            myQueue.pop();
        }
    }
    cout<<"\nCount = "<<count<<endl;
}
int main()
{
    int low,high;
    cout<<"\nEnter two range : ";
    cin>>low>>high;
    getSteppingNumbers(low,high);
    cout<<endl;
    return 0;
}
