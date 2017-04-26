#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	srand(time(NULL));
	for(int i=0;i<20;i++)
	{
		cout<<setw(4)<<i+1<<" th random number is : "<<setw(4)<<rand()%80<<endl;
	}
	return 0;
}