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
class person
{
	string name;
	int age;
public:

	person(string iname, int iage)
	{
		name=iname;
		age=iage;
	}
	void details()
	{
		cout<<"Your name is : "<<name<<endl;
		cout<<"Your age is  : "<<age<<endl;
	}
	friend void display(person pers);
};

void display(person pers)
{
	cout<<"From friend function"<<endl;
	cout<<"Your name is : "<<pers.name<<endl;  //can access private property
	cout<<"Your age is  : "<<pers.age<<endl;
	return ;
}

int main()
{
	person Mathura("Mathura",20);
	Mathura.details();
	display(Mathura );
	return 0;
}