/*following programme doesn't run here beacause ,the machine doesn't support c++ 11*/

/*the unordered set and map are same as normal set and map except they are hash based implemented*/
#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <numeric>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <functional>
#include <unordered_set>
#include <unordered_map>

/*in c++ 11 includes unordered set and unordered multiset*/
//it is hash table implementation
using namespace std;


int main()
{
	unordered_set < string > mySet1 = {"mathura","maths","Kankha","Talgaon"};
	cout<<"Showing contents : "<<endl;
	for(auto itr=mySet.begin();itr!=mySet.end();++itr)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	vector < string > vec= {"Mayurbhanj","Odisha"};
	mySet1.insert(vec.begin(),vec.end());
	unordered_set < int > mySet;

	mySet.insert(4);
	mySet.insert(6);
	mySet.insert(7);
	mySet.insert(8);
	mySet.insert(2);
	mySet.insert(4);
	mySet.insert(3);
	unordered_set < int > ::iterator it;
	cout<<"Showing contents : "<<endl;
	for(auto itr=mySet.begin();itr!=mySet.end();++itr)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	
	cout<<"Showing contents : "<<endl;
	for(auto itr=mySet1.begin();itr!=mySet1.end();++itr)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	//hash table specific APIs:
	
	cout<<"Load factor : "<<mySet1.load_factor()<<endl;
	string x="Kankha";
	cout<<x<<" is in bucket#"<<mySet1.bucket(x)<<endl;
	cout<<"Total bucket : "<<mySet1.bucket_count()<<endl;
	return 0;
}