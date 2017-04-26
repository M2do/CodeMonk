#include <iostream>
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
	temp->left=NULL;;
	temp->right=NULL;
	return temp;
}
node* buildTree(int in[],int po[],int l,int h)
{
	static int postIndex=h;
	if(l>h)
	{
		return NULL;
	}
	int rootData=po[postIndex--];
	node* root=getnode(rootData);
	int i;
	for(i=h;i>=l;i--)
	{
		if(in[i]==rootData)
		{
			break;
		}
	}
	root->right=buildTree(in,po,i+1,h);
	root->left=buildTree(in,po,l,i-1);
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
	int in[]={4,8,2,5,1,6,3,7};
	int po[]={8,4,5,2,6,7,3,1};
	node* root=buildTree(in,po,0,7);
	cout<<"Inorder Traversal Of Above Tree is : ";
	inOrder(root);
	cout<<endl;
	return 0;
}