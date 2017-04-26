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
int getLeftSum(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int ldata=getLeftSum(root->left);
    int rdata=getLeftSum(root->right);
    root->data+=ldata;
    return root->data+rdata;
}
int main()
{
    node* root=getNode(1);
    root->left=getNode(2);
    root->left->left=getNode(4);
    root->left->right=getNode(5);
    root->right=getNode(3);
    root->right->left=getNode(7);
    root->right->right=getNode(6);
    cout<<"Inorder Traversal Of Tree Created : ";
    inOrder(root);
    cout<<endl;
    getLeftSum(root);
    cout<<"Inorder After adding left-subtree data : ";
    inOrder(root);
    cout<<endl;
    return 0;
}
