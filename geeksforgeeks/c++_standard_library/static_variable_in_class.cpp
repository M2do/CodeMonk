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

class human
{
public:
	human()
	{
		human_count++;
	}
	static int human_count;
	void human_total()
	{
		cout<<"THere are : "<<human_count<<" people "<<endl;
	}

};
int human::human_count=0;
int main()
{
	human Mathura;
	Mathura.human_total();
	human Math;
	Math.human_total();
	human Mathu;
	Mathu.human_total();

	return 0;
}