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

using namespace std;
/* read only and implemented using tree */
int main()
{
	cout<<"Set begins "<<endl;
	set < int > mySet;
	mySet.insert(3);
	mySet.insert(1);
	mySet.insert(7);  //mySet : 1 3 7 automatically sorted  insertion takes logn time

	set < int > :: iterator it;
	it=mySet.find(7);   //also takes logn time 

	pair < set < int >:: iterator,bool> ret;
	ret=mySet.insert(3);   //unsuccessfull insertion  and adress of 3 returned as encountered
	cout<<"Showing contents "<<endl;
	for(it = mySet.begin();it!=mySet.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	if(ret.second==false)
	{
		it=ret.first;   //points to 3 
	}
	cout<<"\nit points to : "<<*it<<endl;
	mySet.insert(it,9);  // here it is for reference or hint to find location but 9 is inserted in sorted way
	                       // 1 3 7 9

	mySet.erase(it);    // set : 1 7 9
	mySet.erase(7);     //set : 1 9
	cout<<"Showing contents "<<endl;
	for(it = mySet.begin();it!=mySet.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"\nMultiset begins"<<endl;  //has same effect as set but it allows duplication
	multiset < int > myMultiSet;




    //map and set has same interface but in map we insert the pair ,whereas in set we insert value
    /*
    note thar pair <char , int >('a',200)
              or 
    pair <char , int > pr;
    pr.first='a;
    pr.second=200; are same 
    */
    cout<<"\nMap begins "<<endl;
    map < char , int > myMap;
    myMap.insert(pair< char ,int >('a',100));
    myMap.insert(pair< char ,int >('z',200));
    myMap.insert(pair< char ,int >('b',300));
    myMap.insert(make_pair('d',400));
    map < char , int > ::iterator iter=myMap.begin();
    myMap.insert(iter,pair< char , int >('b',300));   //iter is just a hint
    iter=myMap.find('z');
    cout<<"iter contains : "<<(*iter).first<<" <----> "<<(*iter).second<<endl;
    cout<<"Showing contents "<<endl;
	for(map< char , int >::iterator it = myMap.begin();it!=myMap.end();it++)
	{
		cout<<(*it).first<<" <--> "<<(*it).second<<endl;
	}
	cout<<endl;
	cout<<"\nMulimap begins "<<endl;
	//it just differ with map in  the sense of taking duplicates ,also it is read only no assignment can 
	//can be done with map keys and values 
	cout<<endl;

	return 0;
}