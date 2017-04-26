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
template < typename T>
T square(T x)
{
	return x*x;
}

template < typename T>
class bvector
{
	T arr[100];
	int size;
public:
	bvector()
	{
		size=0;
	}
	void push(int x)
	{
		arr[size]=x;
		size++;
	}
	T get(int i)
	{
		return arr[i];
	}
	T getsize()
	{
		return size;
	}
	void print()
	{
		for(int i=0;i<size;i++)
		{
			cout<<setw(2)<<arr[i]<<" ";
		}
		cout<<endl;
	}
	bvector < int > operator* (bvector < int > rh2)
    {
	    bvector < int > temp;
	    for(int i=0;i<rh2.getsize();i++)
	    {
		    temp.push(arr[i]*rh2.get(i));
	    }
	    return temp;
    }
};
/*
bvector < int > operator* (bvector < int > rh1, bvector < int >  rh2)
{
	bvector < int > temp;
	for(int i=0;i<rh1.getsize();i++)
	{
		temp.push(rh1.get(i)*rh2.get(i));
	}
	return temp;
}*/
int main()
{
	bvector< int > bv;
	bvector < int > b;
	bv.push(2);
	bv.push(8);
	bv.push(5);
	bv.push(3);
	bv.push(4);
	bv.print();
	b=square(bv);
	b.print();
	return 0;
}