#include <bits/stdc++.h>
using namespace std;
class Graph
{
	int V;
	list <int> *adjList;
	void DFSUtil(int from,bool visited[]);
	void createStackUtil(int from,bool visited[],stack<int> &Stack)
	void printStack(stack<int> Stack);
public:
	Graph(int V);
    void addEdge(int src,int dst);
	void printGraph();
	void DFS();
	void createStack();
};
Graph::Graph(int V)
{
	this->V = V;
	adjList = new list<int>[V];
}
void Graph::addEdge(int src,int dst)
{
	adjList[src].push_back(dst);
}
void Graph::printGraph()
{
	for(int i=0;i<V;i++)
	{
		cout<<"From "<<i<<" :";
		list <int>::iterator it;
		for(it = adjList[i].begin();it!=adjList[i].end();it++)
		{
			cout<<"-->"<<*it<<" ";
		}
		cout<<endl;
	}
}
void Graph::DFSUtil(int from,bool visited[])
{
	visited[from] = true;
	cout<<"Visited = "<<from<<endl;
	list<int>::iterator it;
	for(it = adjList[from].begin();it!=adjList[from].end();it++)
	{
		if(!visited[*it])
		{
			DFSUtil(*it,visited);
		}
	}
}
void Graph::DFS()
{
	bool visited[V];
	for(int i=0;i<V;i++)
	{
		visited[i] = false;
	}
	for(int i=0;i<V;i++)
	{
		if(!visited[i])
		{
			DFSUtil(i,visited);
		}
	}
}
void Graph::createStackUtil(int from,bool visited[],stack<int> &Stack)
{
	visited[from] = true;
	for(list<int>::iterator it = adjList[from].begin();it!=adjList[from].end();it++)
	{
		if(!visited[*it])
		{
			createStackUtil(*it,visited,Stack);
		}
	}
	(Stack).push(from);
}
void Graph::printStack(stack<int> Stack)
{
	while(!Stack.empty())
	{
		int node = Stack.top();
		Stack.pop();
		cout<<node<<endl;
	}
	cout<<endl;
}
void Graph::createStack()
{
	stack<int> Stack;
	bool visited[V];
	for(int i=0;i<V;i++)
	{
		visited[i] = false;
	}
	for(int i=0;i<V;i++)
	{
		if(!visited[i])
		{
			createStackUtil(i,visited,Stack);
		}
	}
	printStack(Stack);
}
int main()
{
	Graph graph(5);
	graph.addEdge(0,2);
	graph.addEdge(0,3);
	graph.addEdge(1,0);
	graph.addEdge(2,1);
	graph.addEdge(3,4);
	cout<<"Graph Generated : "<<endl;
	graph.printGraph();
	cout<<"\nDFS Traversal of above Graph :"<<endl;
	graph.DFS();
	cout<<"\nRequired Stack for finding SCC : "<<endl;
	graph.createStack();
	return 0;
}