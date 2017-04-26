#include <bits/stdc++.h>
using namespace std;
#define n 6
int getMaxSum(int arr[][n])
{
	int maxSum = INT_MIN;
	for(int i=0;i<4;i++)
	{
		int sum;
		for(int j=0;j<4;j++)
		{
			sum = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
			if(sum > maxSum)
			{
				maxSum = sum;
			}
		}
	}
	return maxSum;
}
int main()
{
	int arr[6][6];
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			cin>>arr[i][j];
		}
	}
	int totalSum = 0;
	cout<<"Output Sample : "<<endl;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<setw(2)<<arr[i][j]<<" "<<setw(2)<<arr[i][j+1]<<" "<<setw(2)<<arr[i][j+2]<<"  ";
		}
		cout<<endl;
		cout<<"   "<<setw(2)<<arr[i+1][1];
		for(int j=1;j<4;j++)
		{
			cout<<"        "<<setw(2)<<arr[i+1][j+1];
		}
		cout<<endl;
		for(int j=0;j<4;j++)
		{
			cout<<setw(2)<<arr[i+2][j]<<" "<<setw(2)<<arr[i+2][j+1]<<" "<<setw(2)<<arr[i+2][j+2]<<"  ";
		}
		cout<<"\n\n";
	}
	cout<<"maxSum = "<<getMaxSum(arr)<<endl;
	return 0;;
}