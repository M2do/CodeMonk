// A C++ Program to detect cycle in a graph
#include<iostream>
#include <list>
#include <limits.h>

using namespace std;

class Graph
{
	int V; // No. of vertices
	list<int> *adj; // Pointer to an array containing adjacency lists
	void isCyclicUtil(int v, bool visited[], bool *rs); // used by isCyclic()
	void printCycle(bool *recStack);
public:
	Graph(int V); // Constructor
	void addEdge(int v, int w); // to add an edge to graph
	void isCyclic(); // returns true if there is a cycle in this graph
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}

// This function is a variation of DFSUytil() in http://www.geeksforgeeks.org/archives/18212
void Graph::printCycle(bool *recStack)
{
	cout<<"First Cycle Detected : ";
	for(int i=0;i<V;i++)
	{
		if(recStack[i])
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
}
void Graph::isCyclicUtil(int v, bool visited[], bool *recStack)
{
	if(visited[v] == false)
	{
		// Mark the current node as visited and part of recursion stack
		visited[v] = true;
		recStack[v] = true;

		// Recur for all the vertices adjacent to this vertex
		list<int>::iterator i;
		for(i = adj[v].begin(); i != adj[v].end(); ++i)
		{
			if(!visited[*i])
			{
				isCyclicUtil(*i, visited, recStack);
			}
			else
			{
				printCycle(recStack);
				return;
			}
		}

	}
}

// Returns true if the graph contains a cycle, else false.
// This function is a variation of DFS() in http://www.geeksforgeeks.org/archives/18212
void Graph::isCyclic()
{
	// Mark all the vertices as not visited and not part of recursion
	// stack
	bool *visited = new bool[V];
	bool *recStack = new bool[V];
	for(int i = 0; i < V; i++)
	{
		visited[i] = false;
		recStack[i] = false;
	}

	// Call the recursive helper function to detect cycle in different
	// DFS trees
	//for(int i = 0; i < V; i++)
		isCyclicUtil(0, visited, recStack);
}

int main()
{
	// Create a graph given in the above diagram
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);
	g.isCyclic();
	return 0;
}
