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
node* cutMinPath(node* root,int minlen,int len)
{
    if(root==NULL)
    {
        return NULL;
    }
    /*
    if(root->left==NULL&&root->right==NULL)
    {
        if(len<minlen)
        {
            free(root);
            return NULL;
        }
        return root;
    }*/
    //len++;
    root->left=cutMinPath(root->left,minlen,len+1);
    root->right=cutMinPath(root->right,minlen,len+1);
    if(root->left==NULL&&root->right==NULL)
    {
        if(len<minlen)
        {
            free(root);
            return NULL;
        }
       // return root;
    }
    return root;
}

int main()
{
    node* root=getNode(1);
    root->left=getNode(2);
    root->right=getNode(3);
    root->left->left=getNode(4);
    root->left->right=getNode(5);
    root->left->left->left=getNode(7);
    root->right=getNode(3);
    root->right->right=getNode(6);
    root->right->right->left=getNode(8);
    root->right->right->left->left=getNode(10);
    cout<<"Inorder Traversal Of Tree Created  : ";
    inOrder(root);
    cout<<endl;
    int minlen=4;
    int len=1;
    root=cutMinPath(root,minlen,len);
    cout<<"Inorder Traversal of modified Tree : ";
    inOrder(root);
    cout<<endl;
    return 0;
}
