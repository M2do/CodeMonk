#include <iostream>
using namespace std;

void swapnibble(int num)
{
    cout << (((num & 0x0f)<<4) | ((num & 0xf0)>>4))<<endl;
}

int main() 
{
	int t;
	cin >> t;
	while(t > 0)
	{
	    int num;
	    cin >> num;
	    swapnibble(num);
	    t--;
	}
	return 0;
}