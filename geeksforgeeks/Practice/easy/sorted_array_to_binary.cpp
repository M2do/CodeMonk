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
node* arrBst(int arr[],int l,int h)
{
	if(l>h)
	{
		return NULL;
	}
	int mid=l+(h-l)/2;
	node* root=getnode(arr[mid]);
	root->left=arrBst(arr,l,mid-1);
	root->right=arrBst(arr,mid+1,h);
	return root;
}
void preOrder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int size;
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		//sort(arr,arr+size);
		node* root=arrBst(arr,0,size-1);
		preOrder(root);
		cout<<endl;
	}
	return 0;
}