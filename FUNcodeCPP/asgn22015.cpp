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
	node* temp = new node;
	temp->data = idata;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
node* insert(node* root,int idata)
{
	if(root==NULL)
	{
		return getNode(idata);
	}
	if(idata<=root->data)
	{
		root->left = insert(root->left,idata);
	}
	else
	{
		root->right = insert(root->right,idata);
	}
	return root;
}
void preOrder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<setw(2)<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}
void inOrder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	inOrder(root->left);
	cout<<setw(2)<<root->data<<" ";
	inOrder(root->right);
}
int getHeight(node* root)
{
	if(root==NULL)
	{
		return -1;
	}
	int lh = getHeight(root->left);
	int rh = getHeight(root->right);
	return max(lh,rh)+1;
}
node* rightRotate(node* root)
{
	node* new_root = root->left;
	node* new_root_right = new_root->right;

	new_root->right = root;
	root->left = new_root_right;

	return new_root;
}
node* makeSkew(node* T)
{
   node *p, *r;
   r = new node;
   r -> data = -1;
   r -> left = NULL;
   r -> right = T;

   p = r;
   while (p -> right)
   {
      if (p -> right -> left == NULL) p = p -> right;
      else p -> right = rightRotate(p -> right);
   }
   return r;
}
node* rebalance(node* root)
{

}
int main()
{
	int n,num;
	node* root=NULL;
	cin>>n;
	cout<<"n = "<<n;
	cout<<"\n\n+++ Insert  : ";
	for(int i=0;i<n;i++)
	{
		cin>>num;
		cout<<num<<" ";
		root=insert(root,num);
	}
	cout<<"\n\n+++ Initial BST created : "<<endl;
	cout<<"    "<<"Preorder  : ";
	preOrder(root);
	cout<<"\n    "<<"Inorder   : ";
	inOrder(root);
	cout<<"\n    "<<"Height    : "<<setw(2)<<getHeight(root);
	cout<<"\n\n+++ The tree is now fully right-skew : "<<endl;
	node* root1 = makeSkew(root);
	root1=root1->right;
	cout<<"    "<<"Preorder  : ";
	preOrder(root1);
	cout<<"\n    "<<"Inorder   : ";
	inOrder(root1);
	cout<<"\n    "<<"Height    : "<<setw(2)<<getHeight(root1);
	cout<<"\n\n+++ Balance restored in the tree: "<<endl;
	root1 = rebalance(root1);
	cout<<"    "<<"Preorder  : ";
	preOrder(root1);
	cout<<"\n    "<<"Inorder   : ";
	inOrder(root1);
	cout<<"\n    "<<"Height    : "<<setw(2)<<getHeight(root1);
	return 0;
}
