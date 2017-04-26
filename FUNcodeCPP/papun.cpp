#include <bits/stdc++.h>
using namespace std;
int sum=0;
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
void printArr(int arr[],int len)
{
    int j=len-1;
    cout<<"Path from Root : ";
    for(int i=0;i<len;i++)
    {
        if(i==len-1)
        {
            sum+=arr[i]*pow(10,j--);
            cout<<arr[i]<<endl;
        }
        else
        {
            sum+=arr[i]*pow(10,j--);
            cout<<arr[i]<<"-> ";
        }
    }
}
void printPathTree(node* root,int arr[],int len)
{
    if(root==NULL)
    {
        return;
    }
    arr[len++]=root->data;
    if(root->left==NULL&&root->right==NULL)
    {
        printArr(arr,len);
        return;
    }
    printPathTree(root->left,arr,len);
    printPathTree(root->right,arr,len);
    return;
}
void printPath(node* root)
{
    int arr[200];
    printPathTree(root,arr,0);
    return;
}
int main()
{
    node* root=getNode(9);
    root->left=getNode(8);
    root->right=getNode(2);
    root->left->left=getNode(3);
    root->left->right=getNode(5);
    root->right->left=getNode(6);
    inOrder(root);
    cout<<endl;
    printPath(root);
    cout<<"Sum of all Paths : "<<sum<<endl;
    return 0;
}
