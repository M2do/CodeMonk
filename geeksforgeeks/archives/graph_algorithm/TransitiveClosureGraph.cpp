#include <bits/stdc++.h>
using namespace std;
#define V 4
void printSolution(bool reach[][V])
{
	cout<<"Transitive closure of the graph is : "<<endl;
	for(int i=0;i<V;i++)
	{
		for(int j=0;j<V;j++)
		{
			cout<<reach[i][j]<<" ";		
		}
		cout<<endl;
	}
	return;
}
void getTransitiveClosure(bool graph[][V])
{
	bool reach[V][V];
	for(int i=0;i<V;i++)
	{
		for(int j=0;j<V;j++)
		{
			reach[i][j] = graph[i][j];
		}
	}
	for(int k=0;k<V;k++)
	{
		for(int i=0;i<V;i++)
		{
			for(int j=0;j<V;j++)
			{
				reach[i][j] = reach[i][j]||(reach[i][k]&&reach[k][j]);
			}
		}
	}
	printSolution(reach);
	return;	
}
int main()
{
	bool graph[V][V] = {{1, 1, 0, 1},
                        {0, 1, 1, 0},
                        {0, 0, 1, 1},
                        {0, 0, 0, 1}
                       };
    getTransitiveClosure(graph);                  
	return 0;
}