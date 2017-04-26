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
void getSecondLargest(node* root)
{
    static int len=0;
    if(root==NULL)
    {
        return;
    }
    getSecondLargest(root->right);
    len++;
    if(len==2)
    {
        cout<<"Second Largest Number is : "<<root->data<<endl;
        return;
    }
    getSecondLargest(root->left);
}
node* getSuccessor(node* root)
{
	if(root->left==NULL)
	{
		return root;
	}
	return getSuccessor(root->left);
}
node* deleteOld(node* root,int val)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(val<root->data)
	{
		root->left=deleteOld(root->left,val);
	}
	if(val>root->data)
	{
		root->right=deleteOld(root->right,val);
	}
	else
	{
		if(root->left==NULL)
		{
			node* temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			node* temp=root->left;
			free(root);
			return temp;
		}
		else
		{
			node* temp=getSuccessor(root->right);	
			root->data=temp->data;
			root->right=deleteOld(root->right,temp->data);	
		}
	}
	return root;
}
node* insertnew(node* root,int idata)
{
	if(root==NULL)
	{
		return getNode(idata);
	}
	if(idata<root->data)
	{
		root->left=insertnew(root->left,idata);
	}
	else
	{
		root->right=insertnew(root->right,idata);
	}
	return root;
}
node* insertNewNum(node* root,int newnum,int oldnum)
{
	root=deleteOld(root,oldnum);
	insertnew(root,newnum);
	return root;
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
	cout<<"Normal Inorder Traversal of Tree Created   : ";
	inOrder(root);
	cout<<endl;
	getSecondLargest(root);
	root=insertNewNum(root,10,70);
	cout<<"Normal Inorder Traversal of Tree Recreated : ";
	inOrder(root);
	cout<<endl;
	return 0;
}