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

template <typename T>     //template function
T square(T x)
{
	return x*x;
}

int main()
{
	 cout<<square(5)<<endl;      //or square <int >(5) does the same ,but compiler always infer it but not 
	                              // in case of  class template passing data type is compulsory
	 cout<<square(5.5)<<endl;
	 return 0;
}