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
class boVector
{
	T arr[1000];
	int size;
public:
	boVector()
	{
		size=0;
	}
	void push (T x)
	{
		cout<<setw(10)<<x<<"  Pushed "<<endl;
		arr[size]=x;
		size++;
	}
	int getsize()
	{
		return size;
	}
	void print()
	{
		cout<<"Pushed Contents : ";
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	
};

int main()
{
	boVector < int > bv;          //indicating < int > is a must unlike in template function
	boVector < string > str;
	str.push("Mathura");
	str.push("Student");
	str.push("At");
	str.push("IIT");
	str.push("Kharagpur");
	str.print();
	bv.push(3);                 //need not write bv.push< int >(3)
	bv.push(5);
	bv.push(7);
	bv.push(2);
	cout<<"Size : "<<bv.getsize()<<endl;
	bv.push(9);
	bv.print();
	return 0;
}