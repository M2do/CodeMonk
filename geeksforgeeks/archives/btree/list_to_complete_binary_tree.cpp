#include <iostream>
#include <vector>
#include <iomanip>
#include <list>
#include <iterator>

using namespace std;
list < int > myList;
struct node
{
	int data;
	node* left;
	node* right;
};
node* getNode(int idata)
{
	node* temp=new node;
	temp->data=idata;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
list < node* > que;
node* createTree()
{
	node* root=getNode(myList.front());
	que.push_back(root);
	list < int > ::iterator it=myList.begin();
	it++;
	while(it!=myList.end())
	{
		node* parent=que.front();
		que.pop_front();
		parent->left=getNode(*it);
		que.push_back(parent->left);
		it++;
		if(it!=myList.end())
		{
			parent->right=getNode(*it);
			que.push_back(parent->right);
			it++;
		}
		else
		{
			parent->right=NULL;
		}
	
	}

	return root;
}
void inOrder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}
int main()
{
	myList.push_back(10);
	myList.push_back(12);
	myList.push_back(15);
	myList.push_back(25);
	myList.push_back(30);
	myList.push_back(36);
	node* root=createTree();
	inOrder(root);
	cout<<endl;
	return 0;
}