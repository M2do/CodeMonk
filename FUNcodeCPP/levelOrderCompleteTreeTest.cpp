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
bool isComplete(node* root)
{

    list < node* > myList;
    myList.push_back(root);
    while(myList.size()!=0)
    {
        //cout<<myList.front()->data<<" ";
        if(myList.front()->left==NULL&&myList.front()->right==NULL)
        {
            myList.pop_front();
            while(myList.size()!=0)
            {
                if(myList.front()->left!=NULL||myList.front()->right!=NULL)
                {
                    return false;
                }
                myList.pop_front();
            }
            return true;
        }
        if(myList.front()->left)
        {
            myList.push_back(myList.front()->left);
        }
        else
        {
            if(myList.front()->right)
            {
                return false;
            }
        }
        if(myList.front()->right)
        {
            myList.push_back(myList.front()->right);
        }
        myList.pop_front();
    }
    //cout<<endl;
    myList.clear();
    //return true;
}
int main()
{
    node* root=getNode(1);
    root->left=getNode(2);
    root->left->left=getNode(4);
    root->left->right=getNode(5);
    root->right=getNode(3);
    root->right->right=getNode(6);
    cout<<"Inorder Traversal of Tree Created : ";
    inOrder(root);
    cout<<endl;
    if(isComplete(root))
    {
        cout<<"The Tree is Complete Binary Tree"<<endl;
    }
    else
    {
        cout<<"The Tree Is Not a Complete Binary Tree"<<endl;
    }
    return 0;
}
