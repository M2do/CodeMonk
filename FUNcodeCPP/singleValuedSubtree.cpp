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
bool getCount(node* root,int* count)
{
    if(root==NULL)
    {
        return true;
    }
    bool leftdecide=getCount(root->left,count);
    bool rightdecide=getCount(root->right,count);
    if(leftdecide==false||rightdecide==false)
    {
        return false;
    }
    if(root->left!=NULL&&root->data!=root->left->data)
    {
        return false;
    }
    if(root->right!=NULL&&root->data!=root->right->data)
    {
        return false;
    }
    (*count)++;
    return true;
}
int main()
{
    node* root=getNode(5);
    root->left=getNode(4);
    root->left->left=getNode(4);
    root->left->right=getNode(4);
    root->right=getNode(5);
    root->right->right=getNode(5);
    cout<<"Inorder Traversal Of Tree Created : ";
    inOrder(root);
    cout<<endl;
    int count=0;
    getCount(root,&count);
    cout<<"Total Number of same valued subtree "<<count<<endl;
    return 0;
}
