#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <numeric>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <functional>
using namespace std;
class graph
{
	int v;
	list < int >* adj;
	void dfsutil(int s,bool visited[]);
public:
	graph(int v);
	void addEdge(int s,int e);
	void showlist();
	void bfs(int s);
	void dfs(int s);
};
graph::graph(int v)
{
	this->v=v;
	adj=new list< int > [v];
}
void graph::addEdge(int s,int e)
{
	adj[s].push_back(e);
}
void graph::showlist()
{
	for(int i=0;i<v;i++)
	{
		cout<<"From node "<<i<<"-->  ";
		for(list < int > :: iterator it=adj[i].begin();it!=adj[i].end();it++)
		{
			cout<<*it<<"  ";
		}
		cout<<endl;
	}
}
void graph::bfs(int s)
{
	bool* visited = new bool[v];
	for(int i=0;i<v;i++)
	{
		visited[i]=false;
	}
	cout<<"BFS starting from  "<<s<<" : ";
	visited[2]=true;
	list < int > myList;
	myList.push_back(s);
	while(!myList.empty())
	{
		int now=myList.front();
		cout<<now<<"  ";
		myList.pop_front();
		for(list < int >::iterator it=adj[now].begin();it!=adj[now].end();it++)
		{
			if(!visited[*it])
			{
				visited[*it]=true;
				myList.push_back(*it);
			}
		}
	}
	cout<<endl;
}

void graph::dfsutil(int s,bool visited[])
{
	visited[s]=true;
	cout<<s<<"  ";
	for(list < int > :: iterator it=adj[s].begin();it!=adj[s].end();it++)
	{
		if(!visited[*it])
		{
			dfsutil(*it,visited);
		}
	}
}
void graph::dfs(int s)
{
	bool* visited=new bool[v];
	for(int i=0;i<v;i++)
	{
		visited[i]=false;
	}
	cout<<"DFS starting from  "<<s<<" : ";
	dfsutil(s,visited);
	cout<<endl;
}
int main()
{
	graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);
	g.showlist();
	g.bfs(2);
	g.dfs(2);
	return 0;
}
