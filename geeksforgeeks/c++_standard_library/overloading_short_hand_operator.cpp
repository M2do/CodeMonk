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
/*overloading +=  and +- */

class marks
{
	int mark;;
public:
	marks()
	{
		mark=0;
	}
	marks(int m)
	{
		mark=m;
	}
	void yourMarkPlease()
	{
		cout<<"Your mark is : "<<mark<<endl;
	}
	void operator+=(int bonusmark)
	{
		mark=mark+bonusmark;
	}
	friend void operator-=(marks& curobj,int redmark);
};
void operator-=(marks& curobj,int redmark)  //friend function has two parameters 
{
	curobj.mark-=redmark;
}
int main()
{
	marks anilsmark(45);
	anilsmark.yourMarkPlease();
	anilsmark+=20;
	anilsmark.yourMarkPlease();
	anilsmark-=20;
	anilsmark.yourMarkPlease();
	return 0;
}