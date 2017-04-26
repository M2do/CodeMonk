#include <bits/stdc++.h>
using namespace std;
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
int getCeil(node* root,int idata)
{
    if(root==NULL)
    {
        return -1;
    }
    if(idata==root->data)
    {
        return root->data;
    }
    if(idata>root->data)
    {
        return getCeil(root->right,idata);
    }
    else
    {
        int leftCeil=getCeil(root->left,idata);
        return (leftCeil>=idata)?leftCeil:root->data;
    }
    return -1;
}
int main()
{
	node* root=getNode(8);
	root->left=getNode(4);
	root->right=getNode(12);
	root->left->left=getNode(2);
	root->left->right=getNode(6);
	root->right->left=getNode(10);
	root->right->right=getNode(14);
	cout<<"Inorder Traversal of The Tree : ";
	inOrder(root);
	cout<<endl;
	cout<<"value -- Ceiling "<<endl;
	for(int i=0;i<=15;i++)
	{
	    cout<<setw(3)<<i<<" --- "<<setw(3)<<getCeil(root,i)<<endl;
	}
	return 0;
}
