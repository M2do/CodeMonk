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
    if(idata>root->data)
    {
        root->right=insert(root->right,idata);
    }
    return root;
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
void getGreaterSum(node* root,int* sum)
{
    if(root==NULL)
    {
        return;
    }
    getGreaterSum(root->right,sum);
    int temp=root->data;
    root->data=*sum;
    *sum+=temp;
    //root->data=*sum;
    //*sum+=root->data;
    //*sum+=root->data;
    //cout<<*sum<<" ";
    getGreaterSum(root->left,sum);
}
int main()
{
    node* root=NULL;
    root=insert(root,11);
    root=insert(root,2);
    root=insert(root,29);
    root=insert(root,1);
    root=insert(root,7);
    root=insert(root,15);
    root=insert(root,40);
    root=insert(root,35);
    cout<<"Tree   Created  Inorder  : ";
    inOrder(root);
    cout<<endl;
    int sum=0;
    getGreaterSum(root,&sum);
    cout<<"GreaterSum Tree inorder  : ";
    inOrder(root);
    sum=0;
    cout<<endl;
    return 0;
}