#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <numeric>
using namespace std;

template <typename T>
class marks
{

	T internal;
	T external;
public:
	int ag;
	void setage(int iage)
	{
    	ag=iage;
	}
	void age()
	{
		cout<<ag<<endl;
	}
	marks()
	{
		internal=0;
		external=0;
	}
	marks(T m,T n)
	{
		internal=m;
		external=n;
	}
	void getmark(T m,T n)
	{
		internal=m;
		external=n;
	}
	T getinternal()
	{
		return internal;
	}
	T getexternal()
	{
		return external;
	}
	void display()
	{
		cout<<"Your internal mark is : "<<setw(4)<<internal<<endl;
		cout<<"Your external mark is : "<<setw(4)<<external<<endl;
	}
	friend marks < int >operator+(marks < int >m1,marks < int  > m2);
	/*
	marks < T > operator+(marks < T > m2)
	{
		marks < T >temp;
		temp.internal=internal+m2.getinternal();
		temp.external=external+m2.getexternal();
		return temp;
	}*/
};
marks < int > operator+(marks < int > m,marks < int > n)
{
	marks < int >temp;
	temp.internal=m.getinternal()+n.getinternal();
	temp.external=m.getexternal()+n.getexternal();
	return temp;
}
template < typename T>
T sumit(T m,T n)
{
	return m+n;
}
int main()
{
	marks < int >Mathuratest1(34,43);
	marks < int >Mathuratest2(25,50);
	Mathuratest1.display();
	Mathuratest2.display();
	marks < int >Mathu;
	Mathu=sumit(Mathuratest1,Mathuratest1);
	Mathu.display();
	marks < int >Math;
	Math.setage(20);
	Math.age();
	//cout<<math.age<<endl;
	return 0;
}