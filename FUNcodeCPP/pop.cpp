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
int getHeight(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return max(getHeight(root->left),getHeight(root->right));
}
int check=0;
void printArr(int arr[],int len)
{
    static int testLen=len;
    if(testLen!=len)
    {
        check=1;
    }
    for(int i=0;i<len;i++)
    {
        if(i==len-1)
        {
            cout<<arr[i]<<endl;
        }
        else
        {
            cout<<arr[i]<<" -> ";
        }
    }
}

void printTreePath(node* root,int arr[],int len)
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
    printTreePath(root->left,arr,len);
    printTreePath(root->right,arr,len);
    return;
}
void printLevel(node* root)
{
    int arr[200];
    int height=getHeight(root);
    cout<<"Height : "<<height<<endl;
    printTreePath(root,arr,0);
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
    printLevel(root);
    if(check==1)
    {
        cout<<"Leaves are not in the same Level"<<endl;
    }
    else
    {
        cout<<"Leaves are at the same Level"<<endl;
    }
    check=0;
    return 0;
}
