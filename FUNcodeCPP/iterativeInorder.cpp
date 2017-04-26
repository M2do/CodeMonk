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
vector < node* > vec;
void iterativeInorder(node* root)
{
	int done=0;
	while(!done)
	{
		if(root!=NULL)
		{
			vec.push_back(root);
			root=root->left;
		}
		else
		{
			if(vec.size()!=0)
			{
				root=vec.back();
				cout<<vec.back()->data<<" ";
				vec.pop_back();
				root=root->right;
			}
			else
			{
				done=1;
			}
		}

	}
	vec.clear();
}
int main()
{
	node* root=getNode(50);
	root->left=getNode(30);
	root->right=getNode(70);
	root->left->left=getNode(20);
	root->left->right=getNode(40);
	root->right->left=getNode(60);
	root->right->right=getNode(80);
	cout<<"Normal Recursive Inorder Traversal of Tree Created   : ";
	inOrder(root);
	cout<<endl;
	cout<<"Normal Iterative Inorder Traversal of Tree Created   : ";
	iterativeInorder(root);
	cout<<endl;
	return 0;
}