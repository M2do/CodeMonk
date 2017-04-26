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
bool isComplete(node* root,int idx,int nodetotal)
{
    if(root==NULL)
    {
        return true;
    }
    if(idx>=nodetotal)
    {
        return false;
    }
    return (isComplete(root->left,2*idx+1,nodetotal)&&isComplete(root->right,2*idx+2,nodetotal));
}
int main()
{
    node* root=getNode(1);
    root->left=getNode(2);
    root->left->left=getNode(4);
    root->left->right=getNode(5);
    root->right=getNode(3);
    root->right->right=getNode(6);
    cout<<"Inorder Traversal of the tree created : ";
    inOrder(root);
    cout<<endl;
    int idx=0;
    if(isComplete(root,idx,6))
    {
        cout<<"The Binary Tree is Complete Tree  "<<endl;
    }
    else
    {
        cout<<"The Binary Tree is Not the Complete Tree"<<endl;
    }
    return 0;
}
