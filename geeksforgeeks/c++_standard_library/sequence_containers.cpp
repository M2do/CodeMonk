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
#include <functional>

using namespace std;

/*
*Sequence containers  (implemented by array and linked list)
-vector ,deque, list,forward list,array
*Associative container (implemented by binary tree)
-set,multiset
-map,multimap
*Unordered containers (Hash Table)
-Unordered  set/multiset
-Unordered map/multimap

STL Headers 
#include <vector>
#include <deque>
#include <list>
#include <set>  ...both set and mltiset
#include <map>  ...both map and multimap
#include <unordered_set>
#include <unordered_map>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <functional>


vetctor - should be grown in one side ,it should grow 
push_front can be used but all the elements has to be moved one position right
but we use deque if we wish to  grow in both direction
vec[4] -no range check
vec.at(4) -checks the range and throws exception


*/
int main()
{
	cout<<"vecotr begins now "<<endl;
	vector < int > vec;
	vec.push_back(4);
	vec.push_back(1);
	vec.push_back(8);

	cout<<vec[2]<<endl;// gives 8
	cout<<vec.at(2)<<endl; //throws exception if it was vec.at(3)
	for(vector < int >::iterator itr=vec.begin();itr!=vec.end();itr++)
	{
		cout<<*itr<<" ";
	}
	/*	other way of traversing all values
	for(it:vec)
	{
		cout<<it<<" ";    ---->only with c++ 11
	}
	cout<<endl;*/  

	/*common methods used ny all containers
	empty ,copy,swap,clear
	*/
	if(vec.empty())
	{
		cout<<"Not possible"<<endl;
	}
	cout<<endl;
	vector < int >vec2(vec);  //vec2 copies vec
	vec.clear() ;//remove all elements of vec
	vec2.swap(vec); //vec again has 3 items but  vec2 will be empty
	for(vector < int >::iterator itr=vec.begin();itr!=vec.end();itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;


	/*deque*/
	cout<<"\ndeque begins now "<<endl;
	deque < int > deq;//{4,6,7};//                    deq[1]=6
	deq.push_front(2);  // deq : {2,4,6,7}          deq[1]=4
	deq.push_back(4);
	deq.push_back(6);
	deq.push_back(7);
	deq.push_back(3);   //deq : {2,4,6,7,3}  note : deq[1]=4
	for(deque < int >::iterator itr=deq.begin();itr!=deq.end();itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;


	/*list   --- doubly linked list*/  //fast remove and insert but slow search  and contains more cache and 
	 //memory
	cout<<"\nList begins now "<<endl;
	list < int > myList;
	myList.push_back(5);
	myList.push_back(2);
	myList.push_back(9);
	for(list < int > :: iterator itr=myList.begin();itr!=myList.end();itr++)
	{
		cout<<*itr<<" ";     // list : 5 2 9
	}
	cout<<endl;
	myList.push_back(4);
	myList.push_back(1);
	myList.push_back(3);
	myList.push_back(10);
	cout<<"List contains : "<<endl;
	for(list < int > :: iterator itr=myList.begin();itr!=myList.end();itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	list < int > :: iterator itr=find(myList.begin(),myList.end(),2);//find is here algorithm function
	cout<<"2 found : "<<*itr<<endl;
	myList.insert(itr,45);  // list : 5 45 2 9 4 1 3 10    fast insertion
	cout<<"after inserting 45 at position of 2 "<<endl; 
	for(list < int > :: iterator itr=myList.begin();itr!=myList.end();itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	itr++;
	myList.erase(itr);   // list : 5 45 9 4 1 3 10    2 is removed   very fast constant time
	cout<<"after removing 9"<<endl;
	for(list < int > :: iterator itr=myList.begin();itr!=myList.end();itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	list < int > myList1;
	list < int > :: iterator it=myList1.begin();
	myList1.splice(it,myList,myList.begin(),myList.end());
	cout<<"AFter slicing "<<endl;
	for(list < int > :: iterator itr=myList1.begin();itr!=myList1.end();itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;

	/*forward list  -singly linked list */
	/*array has also limitations not widely used */

	return 0;
}