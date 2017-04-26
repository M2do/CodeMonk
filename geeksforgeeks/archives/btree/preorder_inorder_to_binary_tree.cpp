#include <iostream>
using namespace std;
struct node
{
	char data;
	node* left;
	node* right;
};
node* getnode(char idata)
{
	node* temp=new node;
	temp->data=idata;
	temp->left=NULL;;
	temp->right=NULL;
	return temp;
}
node* buildTree(char in[],char pr[],int l,int h)
{
	static int preIndex=0;
	if(l>h)
	{
		return NULL;
	}
	char rootData=pr[preIndex++];
	int i;
	for(i=h;i>=l;i--)
	{
		if(in[i]==rootData)
		{
			break;
		}
	}
	node* root=getnode(rootData);
	root->left=buildTree(in,pr,l,i-1);
	root->right=buildTree(in,pr,i+1,h);
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
	return;
}
int main()
{
	char in[]={'D','B','E','A','F','C'};
	char pr[]={'A','B','D','E','C','F'};
	node* root=buildTree(in,pr,0,5);
	cout<<"Inorder Traversal Of Above Tree is : ";
	inOrder(root);
	cout<<endl;
	return 0;
}