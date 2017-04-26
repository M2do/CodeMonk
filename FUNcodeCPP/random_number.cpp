#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	for(int i=0;i<20;i++)
	{
		cout<<i+1<<" th random number is : "<<rand()%80<<endl;
	}
	return 0;
}