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
int main()
{
    int a=34;
    int b=42;
    cout<<"a = "<<a<<"  "<<"b = "<<b<<endl;
    swap(a,b);
    cout<<"a = "<<a<<"  "<<"b = "<<b<<endl;
    cout<<"max = "<<max(a,b)<<endl;
    cout<<"min = "<<min(a,b)<<endl;
    int arr[]={3,4,56,23,12,13,7997,75564,43};
    int n=9;
    cout<<"Beore sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,arr+n);                      //sort funtion void sort(start address,end address)
    cout<<"After sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int arrs[]={34,65,87,23,68,88,86,32,90};
                                                /******binary_search applied only to the sorted array******/
    sort(arrs,arrs+n);
    if(binary_search(arrs,arrs+n,45))
    {
        cout<<"45 found in the array "<<endl;
    }
    else
    {
        cout<<"45 not found in the array "<<endl;
    }

    if(binary_search(arrs,arrs+n,68))
    {
        cout<<"68 found in the array "<<endl;
    }
    else
    {
        cout<<"68 not found in the array "<<endl;
    }

    cout<<endl;
	return 0;
}