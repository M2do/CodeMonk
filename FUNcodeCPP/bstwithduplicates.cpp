#include <bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	int count;
	node* left;
	node* right;
};
node* getNode(int idata)
{
	node* temp=new node;
	temp->data=idata;
	temp->count=1;
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
	//cout<<root->data<<"(count : "<<root->count<<") -->  ";
	cout<<root->data<<"("<<root->count<<")"<<"  ";
	inOrder(root->right);
}
node* insert(node* root,int idata)
{
	if(root==NULL)
	{
		return getNode(idata);
	}
	if(idata<root->data)
	{
		root->left=insert(root->left,idata);
	}
	else if(idata>root->data)
	{
		root->right=insert(root->right,idata);
	}
	else
	{
	    root->count++;
	    return root;
	}
	return root;
}
node* getSuccessor(node* root)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->left==NULL)
    {
        return root;
    }
    return getSuccessor(root->left);
}
node* deleteNode(node* root,int idata)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(idata<root->data)
    {
        root->left=deleteNode(root->left,idata);
    }
    else if(idata>root->data)
    {
        root->right=deleteNode(root->right,idata);
    }
    else
    {
        if(root->left==NULL)
        {
           /* node* temp=root->right;
            free(root);
            return temp;
            */
            if(root->count==1)
            {
                node* temp=root->right;
                free(root);
                return temp;
            }
            else
            {
                root->count--;
                return root;
            }
        }
        else if(root->right==NULL)
        {
           /* node* temp=root->left;
            free(root);
            return temp;
            */
            if(root->count==1)
            {
                node* temp=root->left;
                free(root);
                return temp;
            }
            else
            {
                root->count--;
                return root;
            }
        }
        else
        {
           /* node* temp=getSuccessor(root->right);
            root->data=temp->data;
            root->right=deleteNode(root->right,temp->data);
            */
            if(root->count==1)
            {
                node* temp=getSuccessor(root->right);
                root->data=temp->data;
                root->right=deleteNode(root->right,temp->data);
            }
            else
            {
                root->count--;
                return root;
            }
        }
    }
    return root;
}
int main()
{
	node* root=NULL;
    root=insert(root,12);
	insert(root,10);
	insert(root,20);
	insert(root,9);
	insert(root,11);
	insert(root,10);
	insert(root,12);
	insert(root,12);
	cout<<"Initial Tree : ";
	inOrder(root);
	cout<<endl;
	cout<<"After deleting 11 : ";
	root=deleteNode(root,11);
	inOrder(root);
	cout<<endl;
	cout<<"After deleting 12 : ";
	root=deleteNode(root,12);
	inOrder(root);
	cout<<endl;
	cout<<"After deleting 12 : ";
	root=deleteNode(root,12);
	inOrder(root);
	cout<<endl;
	cout<<"After deleting 12 : ";
	root=deleteNode(root,12);
	inOrder(root);
	cout<<endl;
	return 0;
}
