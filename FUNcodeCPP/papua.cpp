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
int max(int a,int b)
{
    return (a>b)?a:b;
}
int getHeight(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return max(getHeight(root->left),getHeight(root->right))+1;
}
int sum=0;
void getSum(node* root,int level)
{
    if(root==NULL)
    {
        return;
    }
    if(level==1)
    {
        sum+=root->data;
        return;
    }
    getSum(root->left,level-1);
    getSum(root->right,level-1);
}
void printSumLevel(node* root)
{
    int height=getHeight(root);
    cout<<"Height : "<<height<<endl;
    for(int i=1;i<=4;i++)
    {
        getSum(root,i);
        cout<<"Sum of elements at level "<<i<<" is : "<<setw(3)<<sum<<endl;
        sum=0;
    }
    return;
}
int main()
{
    node* root=getNode(1);
    root->left=getNode(2);
    root->right=getNode(3);
    root->left->left=getNode(4);
    root->left->right=getNode(5);
    root->right->right=getNode(8);
    root->right->right->left=getNode(6);
    root->right->right->right=getNode(7);
    inOrder(root);
    cout<<endl;
    printSumLevel(root);
    return 0;
}
