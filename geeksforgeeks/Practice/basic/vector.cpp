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
// this code implements all the functions of vectors in cpp
int main()
{
	vector < int > g1;
	vector < int > g2;                 /******************function assgin()*********************/
	vector < int > g3;

	g1.assign(5,78); //5 elements with value 78
	vector < int > :: iterator it;
	it=g1.begin()+1;
	g2.assign(it,g1.end()-1); //assigning using intervals of iterators
	int arr[]={34,65,12,23};
	g3.assign(arr,arr+4); //assigning from array
	cout<<"size of g1 : "<<setw(4)<<g1.size()<<endl;
	cout<<"size of g2 : "<<setw(4)<<g2.size()<<endl;
	cout<<"size of g3 : "<<setw(4)<<g3.size()<<endl;


    vector < int > gquiz;
    int sum =0;                     /*******sum of numbers in vector ********/
    gquiz.push_back(10);
    gquiz.push_back(20);
    gquiz.push_back(30);
    while(!gquiz.empty())
    {
    	sum+=gquiz.back();           //returns reference to last element
    	gquiz.pop_back();
    }
    cout<<"The sum of the elements of gquiz is : "<<sum<<endl;



    /**********demonstration of insert function****************/

    vector < int > gquiz1(3,57);//assigning three 57 
    vector < int > :: iterator ite;
    ite=gquiz1.begin();
    ite=gquiz1.insert(ite,20); //insert 20 before it and returns its iterator
    gquiz1.insert(ite,2,30);   //inserting  two 30's
    ite=gquiz1.begin();

    vector < int > gquiz2(2,40);
    gquiz1.insert(ite+2,gquiz2.begin(),gquiz2.end());   //inserting at an interval from 2nd position


    int arr1[]={50,60,70};
    gquiz1.insert(gquiz1.begin(),arr1,arr1+3);
    cout<<"gquiz1 contains : ";
    for(ite=gquiz1.begin();ite<gquiz1.end();ite++)
    {
    	cout<<setw(4)<<*ite<<" ";
    }
    cout<<endl;


                                    /*******************erase() funtion*********************/

    vector < int > gq;
    for(int i=1;i<=10;i++)
    {
    	gq.push_back(i*10);
    }
    gq.erase(gq.begin()+4); //erasing 5th element
    //erase first 4 elements
    gq.erase(gq.begin(),gq.begin()+3);
    cout<<"gq contains : ";
    for(int i=0;i<gq.size();i++)
    {
    	cout<<setw(4)<<gq[i]<<" ";
    }
    cout<<endl;
    gq.clear();	 // clears the all datas that were present


    vector < int > vec1;
    vector < int > vec2;
    vec1.push_back(10);
    vec1.push_back(20);

    vec2.push_back(30);
    vec2.push_back(40);

    cout<<"Before swaping "<<endl;
    cout<<"vec1 contains : ";
    for( it=vec1.begin();it!=vec1.end();it++)
    {
    	cout<<setw(4)<<*it<<" ";
    }
    cout<<endl;
    cout<<"vec2 contains : ";
    for( it=vec2.begin();it!=vec2.end();it++)
    {
    	cout<<setw(4)<<*it<<" ";
    }
    cout<<endl;

    swap(vec1,vec2);              //swaping two vectors
    cout<<"After swaping "<<endl;
    cout<<"vec1 contains : ";
    for( it=vec1.begin();it!=vec1.end();it++)
    {
    	cout<<setw(4)<<*it<<" ";
    }
    cout<<endl;
    cout<<"vec2 contains : ";
    for( it=vec2.begin();it!=vec2.end();it++)
    {
    	cout<<setw(4)<<*it<<" ";
    }
    cout<<endl;


    vector < int > vec3;
    for(int i=1;i<=5;i++)
    {
    	vec3.push_back(10*i);
    }
    cout<<"Output of  begin and  end : ";
    for( it=vec3.begin();it!=vec3.end();it++)
    {
    	cout<<setw(4)<<*it<<" ";
    }
    cout<<endl;
    vector < int > ::reverse_iterator rit;     //reverse iterator 
    cout<<"Output of rbegin and rend : ";
    for( rit=vec3.rbegin();rit!=vec3.rend();rit++)
    {
    	cout<<setw(4)<<*rit<<" ";
    }
    cout<<endl;


    vector < int > vec4;
    for(int i=1;i<=5;i++)
    {
    	vec4.push_back(10*i);
    }
    cout<<"size : "<<setw(4)<<vec4.size()<<endl;
    cout<<"capacity : "<<setw(4)<<vec4.capacity()<<endl;
    cout<<"max_size : "<<setw(4)<<vec4.max_size()<<endl;
    cout<<"reference operator [g] : vec4[2] = "<<setw(4)<<vec4[2]<<endl;
    cout<<"at : vec4.at(2) = "<<setw(4)<<vec4.at(2)<<endl;
    cout<<"front() : vec4.front() = "<<setw(4)<<vec4.front()<<endl;
    cout<<"back()  : vec4.front() = "<<setw(4)<<vec4.back()<<endl;


/****************************************STL FUNCTIONS FOR VECTOR********************************/


    int n=7;
    int ar[]={10,20,5,23,42,15,20};
    vector < int > vect(ar,ar+n);
    cout<<"vector is : ";
    for(int i=0;i<n;i++)
    {
    	cout<<setw(4)<<vect[i]<<" ";
    }
    cout<<endl;
    sort(vect.begin(),vect.end());

    cout<<"After sorting : ";
    for(int i=0;i<n;i++)
    {
    	cout<<setw(4)<<vect[i]<<" ";
    }
    cout<<endl;
    reverse(vect.begin(),vect.end());
    cout<<"After reversing : ";

    for(int i=0;i<n;i++)
    {
    	cout<<setw(4)<<vect[i]<<" ";
    }
    cout<<endl;
    cout<<"maximum element of the vector : "<<setw(4)<<*max_element(vect.begin(),vect.end())<<endl;
    cout<<"minimum element of the vector : "<<setw(4)<<*min_element(vect.begin(),vect.end())<<endl;
    cout<<"summation of vector elements  : "<<setw(4)<<accumulate(vect.begin(),vect.end(),0)<<endl;


    vect.erase(unique(vect.begin(),vect.end()),vect.end()); //removes duplicate elements in sorted array 
    cout<<"after removing duplicates : ";
    for(int i=0;i<vect.size();i++)
    {
    	cout<<setw(4)<<vect[i]<<" ";
    }
    cout<<endl;

	return 0;
}