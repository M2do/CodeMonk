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
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
void inorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int sumLevel(node* root,int level)
{
	if(root==NULL)
	{
		return 0;
	}
	if(level==0)
	{
		return root->data;
	}
	return sumLevel(root->left,level-1)+sumLevel(root->right,level-1);

}

int main()
{
	node* root=getnode(0);
	root->left=getnode(5);
	root->right=getnode(7);
	root->left->left=getnode(6);
	root->left->right=getnode(4);
	root->right->left=getnode(1);
	root->right->right=getnode(3);
	root->left->right->right=getnode(9);
	cout<<"inorder traversal : ";
	inorder(root);
	cout<<endl;
	cout<<"Sum of all datas at 1nd level : "<<sumLevel(root,1);
	cout<<endl;
	return 0;
}