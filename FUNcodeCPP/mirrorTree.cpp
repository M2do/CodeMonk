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
void getMirror(node* root)
{
    if(root==NULL)
    {
        return;
    }
    getMirror(root->left);
    getMirror(root->right);
    
    node* temp=root->left;
    root->left=root->right;
    root->right=temp;
}
int main()
{
    node* root=getNode(1);
    root->left=getNode(3);
    root->right=getNode(2);
    root->right->left=getNode(5);
    root->right->right=getNode(4);
    cout<<"Inorder Traversal Of Tree Created : ";
    inOrder(root);
    cout<<endl;
    cout<<"Inorder Traversal Of Mirror Tree  : ";
    getMirror(root);//note that tree is modified in the process
    inOrder(root);
    cout<<endl;
    return 0;
}
