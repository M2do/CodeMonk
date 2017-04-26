/*                       Name  = Mathura Tudu
                         Roll Number = 15CS10027
                         pc no = 98

sample input
15
14SY10022 71 63
15SY10001 62 34
15SY10003 45 45
15SY10004 11 24
15SY10005 53 25
15SY10006 40 46
15SY10008 77 85
15SY30002 31 51
15SY30005 49 75
15SY30006 70 85
15SY71P01 74 53
15SY71P05 65 34
15SY91R01 33 71
15SY91R04 71 22
15SY91R05 18 72
1 53 65
1 13 14
2 69 74
2 26 41
1 45 90
0
*/
#include <bits/stdc++.h>
using namespace std;
struct students
{
	string roll;
	int artmark;
	int scimark;
};
students* makeRecord(int n)
{
	students* array = new students[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i].roll>>array[i].artmark>>array[i].scimark;
	}
	return array;
}
void printRecord(students* array,int n)
{
	cout<<"\n\n+++ Initial list (sorted by roll numbers)"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"    "<<array[i].roll<<", "<<setw(2)<<array[i].artmark<<", "<<setw(2)<<array[i].scimark<<endl;
	}
	return;
}
void swap(students* a,students* b)
{
	students temp=*a;
	*a=*b;
	*b=temp;
}
students* sortArtmakrs(students* arr,int n)
{
	int i, j;
    for (i = 0; i < n-1; i++)
    {
    	for (j = 0; j < n-i-1; j++)
    	{
    		if (arr[j].artmark > arr[j+1].artmark)
    		{
    			swap(&arr[j], &arr[j+1]);
    		}
    	}
    }
    return arr;
}
students* sortScimarks(students* arr,int n)
{
	int i, j;
    for (i = 0; i < n-1; i++)
    {
    	for (j = 0; j < n-i-1; j++)
    	{
    		if (arr[j].scimark > arr[j+1].scimark)
    		{
    			swap(&arr[j], &arr[j+1]);
    		}
    	}
    }
    return arr;
}
void getReport(int dec,students* array,int n,int a,int b)
{
	if(dec==1)
	{
		cout<<"\n\n+++ Arts : a = "<<setw(2)<<a<<", "<<"b = "<<setw(2)<<b<<endl;
		cout<<"=== list of students"<<endl;
		students* array1 = sortArtmakrs(array,n);
		for(int i=0;i<n;i++)
		{
			if(array1[i].artmark>=a&&array1[i].artmark<=b)
			{
				cout<<"    "<<array1[i].roll<<", "<<setw(2)<<array1[i].artmark<<", "<<setw(2)<<array1[i].scimark<<endl;
			}
		}
	}
	else
	{
		cout<<"\n\n+++ Science : a = "<<setw(2)<<a<<", "<<"b = "<<setw(2)<<b<<endl;
		cout<<"=== list of students"<<endl;
		students* array2 = sortScimarks(array,n);
		for(int i=0;i<n;i++)
		{
			if(array2[i].scimark>=a&&array2[i].scimark<=b)
			{
				cout<<"    "<<array2[i].roll<<", "<<setw(2)<<array2[i].artmark<<", "<<setw(2)<<array2[i].scimark<<endl;
			}
		}
	}
}
string getDecision(int a,int b)
{
	if(a<b)
	{
		return "BA";
	}
	else if(b<a)
	{
		return "BS";
	}
	else
	{
		return "SC";
	}
}
int binarySearchArtmarks(students* array,int l,int r,int x)
{
	if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (array[mid].artmark == x)  return mid;
        if (array[mid].artmark > x) return binarySearchArtmarks(array, l, mid-1, x);
        return binarySearchArtmarks(array, mid+1, r, x);
   }
   return 0;
}
int binarySearchScimarks(students* array,int l,int r,int x)
{
	if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (array[mid].scimark == x)  return mid;
        if (array[mid].scimark > x) return binarySearchScimarks(array, l, mid-1, x);
        return binarySearchScimarks(array, mid+1, r, x);
   }
   return 0;
}
void hodDecision(students* array,int n)
{
	students* array1 = sortArtmakrs(array,n);
	students* array2 = sortScimarks(array,n);
	int countBA=0;
	int countBS=0;
	int countSC=0;
	for(int i=0;i<n;i++)
	{
		int artrank=binarySearchArtmarks(array1,0,n-1,array[i].artmark)+1;
		int scirank=binarySearchScimarks(array2,0,n-1,array[i].scimark)+1;
		cout<<"    "<<array2[i].roll<<", "<<setw(2)<<array2[i].artmark<<", "<<setw(2)<<array2[i].scimark<<", ";
		string decision = getDecision(artrank,scirank);
		if(decision == "BA") countBA++;
		if(decision == "BS") countBS++;
		if(decision == "SC") countSC++;
		cout<<"Arts rank = "<<setw(2)<<artrank<<", "<<"Science rank = "<<setw(2)<<scirank<<", "<<"Decision : "<<decision<<endl;
	}
	cout<<"\n\n    "<<"Number of BA = "<<setw(2)<<countBA<<endl;
	cout<<"    "<<"Number of BS = "<<setw(2)<<countBS<<endl;
	cout<<"    "<<"Number of SC = "<<setw(2)<<countSC<<endl;
}
int main()
{
	int n;
	cin>>n;
	students* rec;
	rec = makeRecord(n);
	cout<<"\nn = "<<n<<endl;
	printRecord(rec,n);
	int dec,a,b;
	cout<<"\n\n+++ Interval Search"<<endl;
	while(true)
	{
		cin>>dec;
		if(dec==0)
		{
			break;
		}
		else
		{
			cin>>a>>b;
			getReport(dec,rec,n,a,b);
		}
	}
	cout<<"\n\n+++ Rank Comaparisons"<<endl;
	hodDecision(rec,n);
	return 0;
}
