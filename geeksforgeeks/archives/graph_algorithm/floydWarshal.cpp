#include <bits/stdc++.h>
using namespace std;
#define V 4
#define INF 99999
void printSolution(int dist[][V])
{
	cout<<"All pair shortest path matrix is :"<<endl;
	for(int i=0;i<V;i++)
	{
		for(int j=0;j<V;j++)
		{
			if(dist[i][j] == INF)
			{
				cout<<"INF"<<" ";
			}
			else
			{
				cout<<setw(3)<<dist[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}
void getFloydWarshal(int graph[][V])
{
	int dist[V][V],i,j,k;
	for(int i=0;i<V;i++)
	{
		for(int j=0;j<V;j++)
		{
			dist[i][j] = graph[i][j];
		}
	}
	for(int k=0;k<V;k++)
	{
		for(int i=0;i<V;i++)
		{
			for(int j=0;j<V;j++)
			{
				if(dist[i][k] + dist[k][j]<dist[i][j])
				{
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}
	printSolution(dist);
}
int main()
{
	int graph[V][V] = { {0,   5,  INF, 10},
                        {INF, 0,   3, INF},
                        {INF, INF, 0,   1},
                        {INF, INF, INF, 0} 
                      };
    getFloydWarshal(graph);
	return 0;
}