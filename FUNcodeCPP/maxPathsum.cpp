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
int getPathSum(node* root,int* result)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=getPathSum(root->left,result);
    int r=getPathSum(root->right,result);
    int maxinthree=max(max(l,r),root->data);
    int finalmax=max(maxinthree,l+r+root->data);
    *result=max(*result,finalmax);
    return *result;
}
int main()
{
    node* root=getNode(10);
    root->right=getNode(10);
    root->right->right=getNode(-25);
    root->right->right->left=getNode(3);
    root->right->right->right=getNode(4);
    root->left=getNode(2);
    root->left->left=getNode(20);
    root->left->right=getNode(1);
    cout<<"Inorder Traversal of Tree Created : ";
    inOrder(root);
    cout<<endl;
    int result=INT_MIN;
    getPathSum(root,&result)
    cout<<"Maximum Sum of Path : "<<result<<endl;
    return 0;
}
