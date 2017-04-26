#include <bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
	node* rightnode;
};
node* getNode(int idata)
{
	node* temp=new node;
	temp->data=idata;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
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
void printLevel(node* root)
{
	list < node* > myList;
	myList.push_back(root);
	while(myList.size()!=0)
	{
		node* last=myList.back();
		do
	    {
	    	if(temp->left!=NULL)
	    	{
	    		myList.push_back(temp->left);
	    	}
	    	if(temp->right!=NULL)
	    	{
	    		myList.push_back(temp->right);
	    	}
	    	node* temp=myList.back();
	    	myList.pop_back();
	    	if(myList.front()!=last)
	    	{
	    		temp->rightnode=myList.front;
	    	}
	    	else
	    	{
	    		temp->rightnode=NULL;
	    	}

	    }while(myList.back!=myList.front());


	}
	myList.clear();
}
int main()
{
	node* root;
	root=getNode(1);
	root->left=getNode(2);
	root->right=getNode(3);
	root->left->left=getNode(4);
	root->left->right=getNode(5);
	cout<<"Inorder Traversal of above Tree : ";
	inOrder(root);
	cout<<endl;
	cout<<"right to 2 is : "<<root->left->rightnode->data;
	cout<<endl;
	return 0;
}