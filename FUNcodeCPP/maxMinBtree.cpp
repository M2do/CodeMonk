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
int minThree(int a,int b,int c)
{
    int min=a;
    if(min>b)
    {
        min=b;
    }
    if(min>c)
    {
        min=c;
    }
    return min;
}
int getMin(node* root)
{
    if(root==NULL)
    {
        return INT_MAX;
    }
    return minThree(root->data,getMin(root->left),getMin(root->right));
}
int maxThree(int a,int b,int c)
{
    int max=a;
    if(max<b)
    {
        max=b;
    }
    if(max<c)
    {
        max=c;
    }
    return max;
}
int getMax(node* root)
{
    if(root==NULL)
    {
        return INT_MIN;
    }
    return maxThree(root->data,getMax(root->left),getMax(root->right));
}
int main()
{
	node* root=getNode(2);
	root->left=getNode(7);
	root->right=getNode(5);
	root->right->right=getNode(9);
	root->right->right->left=getNode(4);
	root->left->right=getNode(6);
	root->left->right->left=getNode(1);
	root->left->right->right=getNode(11);
	cout<<"Inorder Traversal Of Tree : ";
	inOrder(root);
	cout<<endl;
	cout<<"Minimum Element Present is : "<<getMin(root)<<endl;
	cout<<"Maximum Element Present is : "<<getMax(root)<<endl;
	return 0;
}
