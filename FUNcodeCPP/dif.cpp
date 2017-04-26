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
void hodDecision(students* array,students* array3,int n)
{
	int countBA=0;
	int countBS=0;
	int countSC=0;
	for(int i=0;i<n;i++)
	{

	    students* array1 = sortArtmakrs(array,n);
		int artrank=n-binarySearchArtmarks(array1,0,n-1,array3[i].artmark);
		students* array2 = sortScimarks(array,n);
		int scirank=n-binarySearchScimarks(array2,0,n-1,array3[i].scimark);
		cout<<"    "<<array3[i].roll<<", "<<setw(2)<<array3[i].artmark<<", "<<setw(2)<<array3[i].scimark<<", ";
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
	students* rec1 = new students[n];
	students* rec2 = new students[n];
	rec = makeRecord(n);
	for(int i=0;i<n;i++)
	{
	    rec1[i]=rec[i];
	    rec2[i]=rec[i];
	}
	cout<<"n = "<<n<<endl;
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
	//printRecord(rec1,n);
	hodDecision(rec1,rec2,n);
	return 0;
}
