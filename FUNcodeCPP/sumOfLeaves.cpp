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
void getLeafSum(node* root,int LorR,int* sum)
{
    if(root==NULL)
    {
        return;
    }
    if(!root->left&&!root->right&&LorR)
    {
        (*sum)+=root->data;
    }
    getLeafSum(root->left,1,sum);
    getLeafSum(root->right,0,sum);
}
int main()
{
    node* root=getNode(20);
    root->left=getNode(9);
    root->right=getNode(49);
    root->left->left=getNode(5);
    root->left->right=getNode(12);
    root->left->right->right=getNode(15);
    root->right->right=getNode(52);
    root->right->left=getNode(23);
    root->right->right->left=getNode(50);
    cout<<"Inorder Traversal Of Tree Created  : ";
    inOrder(root);
    cout<<endl;
    int sum=0;
    getLeafSum(root,0,&sum);
    cout<<"The Sum of all Leaves is : "<<sum<<endl;
    return 0;
}
