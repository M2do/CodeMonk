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
/*NOTES ---->
STL consisits of Algorithm and Containers 
library is not so easy to use ,it has some pitfalls*/

int main()
{
	vector < int > vec;
	vec.push_back(4);
	vec.push_back(1);
	vec.push_back(8);

	vector < int >::iterator itr1=vec.begin();   //half open [begin ,end)
	vector < int >::iterator itr2=vec.end();

	for(vector < int > ::iterator itr=itr1;itr!=itr2;itr++)
	{
		cout<<*itr<<" ";  //prints 4 1 8 
	}
	cout<<endl;

	sort(itr1,itr2); // vec : {1,4,8}
	cout<<"after sorting : ";
	for(vector < int > ::iterator itr=itr1;itr!=itr2;itr++)
	{
		cout<<*itr<<" ";  //prints 4 1 8 
	}
	cout<<endl;

}