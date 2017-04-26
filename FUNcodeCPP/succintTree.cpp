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
void showStructure(int datarr[],int datalen,int binaryarr[],int binarylen)
{
    cout<<"Encoded Tree : \nStructure List : "<<endl;
    for(int i=0;i<binarylen;i++)
    {
        cout<<binaryarr[i]<<" ";
    }
    cout<<"\nData List : "<<endl;
    for(int i=0;i<datalen;i++)
    {
        cout<<datarr[i]<<" ";
    }
    cout<<endl;
}
void getStructure(node* root,int datarr[],int* datalen,int binaryarr[],int* binarylen)
{
    if(root==NULL)
    {
        binaryarr[(*binarylen)++]=0;
        return;
    }
    cout<<"key : "<<root->data<<" ";
    datarr[(*datalen)++]=root->data;
    binaryarr[(*binarylen)++]=1;
    if(root->left!=NULL)
    {
        cout<<"| left child : "<<root->left->data<<" ";
    }
    if(root->right!=NULL)
    {
        cout<<"| right child : "<<root->right->data<<" ";
    }
    cout<<endl;
    getStructure(root->left,datarr,datalen,binaryarr,binarylen);
    getStructure(root->right,datarr,datalen,binaryarr,binarylen);
}
node* decodeStructure(int datarr[],int datalen,int* datatestlen,int binaryarr[],int binarylen,int* binarytestlen)
{
    int decide=binaryarr[(*binarytestlen)++];
    if(decide==1)
    {
        node* temp=getNode(datarr[(*datatestlen)++]);
        temp->left=decodeStructure(datarr,datalen,datatestlen,binaryarr,binarylen,binarytestlen);
        temp->right=decodeStructure(datarr,datalen,datatestlen,binaryarr,binarylen,binarytestlen);
        return temp;
    }
    else
    {
        return NULL;
    }

}
void showNewStructure(node* newroot)
{
    if(newroot==NULL)
    {
        return;
    }
    cout<<"key : "<<newroot->data<<" ";
    if(newroot->left!=NULL)
    {
        cout<<"| left child : "<<newroot->left->data<<" ";
    }
    if(newroot->right!=NULL)
    {
        cout<<"| right child : "<<newroot->right->data<<" ";
    }
    cout<<endl;
    showNewStructure(newroot->left);
    showNewStructure(newroot->right);
}
int main()
{
    node* root=getNode(10);
    root->left=getNode(20);
    root->left->left=getNode(40);
    root->left->right=getNode(50);
    root->right=getNode(30);
    root->right->right=getNode(70);
    cout<<"Inorder Traversal Of Tree Created : ";
    inOrder(root);
    cout<<endl;
    int binaryarr[200];
    int datarr[200];
    int binarylen=0;
    int datalen=0;
    cout<<"Given Tree : "<<endl;
    getStructure(root,datarr,&datalen,binaryarr,&binarylen);
    cout<<endl;
    showStructure(datarr,datalen,binaryarr,binarylen);
    cout<<endl;
    cout<<"Preorder Traversal of Decoded Tree : "<<endl;
    int datatestlen=0;
    int binarytestlen=0;
    node* newroot=decodeStructure(datarr,datalen,&datatestlen,binaryarr,binarylen,&binarytestlen);
    showNewStructure(newroot);
    cout<<endl;
    return 0;

}
