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
int getPart(int pre[],int l,int h)
{
    int pick=pre[l];
    for(int i=l+1;i<=h;i++)
    {
        if(pre[i]>pick)
        {
            return i;
        }
    }
    return h+1;
}
node* makeTree(int pre[],int l,int h)
{
    if(l>h)
    {
        return NULL;
    }
    int part=getPart(pre,l,h);
    node* root=getNode(pre[l]);
    root->left=makeTree(pre,l+1,part-1);
    root->right=makeTree(pre,part,h);
    return root;
}
void postOrder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
bool isPre(int arr[],int size)
{

    vector < int > vec;
    int rootData=-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<rootData)
        {
            return false;
        }
        while(vec.size()!=0&&arr[i]>vec.back())
        {
            rootData=vec.back();
            vec.pop_back();
        }
        vec.push_back(arr[i]);
    }
    vec.clear();
    return true;
}
int main ()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int size;
        cin>>size;
        int pre[size];
        for(int i=0;i<size;i++)
        {
            cin>>pre[i];
        }
        if(isPre(pre,size))
        {
            node* root=makeTree(pre,0,size-1);
            postOrder(root);
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }
    
}
