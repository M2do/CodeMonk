#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <iterator>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
};
node* getnode(int idata)
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

node* insert(node* root,int idata)
{
	if(root==NULL)
	{
		return getnode(idata);
	}
	if(idata<=root->data)
	{
		root->left=insert(root->left,idata);
	}
	else
	{
		root->right=insert(root->right,idata);
	}
	return root;
}
int main()
{
	int size;
	cout<<"ENter array size : ";
	cin>>size;
	int arr[size];
	node* root=NULL;
	cout<<"Enter array elements : ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
		root=insert(root,arr[i]);
	}
	cout<<"Inorder Traversal of above tree gives : ";
	inOrder(root);
	cout<<endl;
	return 0;
}