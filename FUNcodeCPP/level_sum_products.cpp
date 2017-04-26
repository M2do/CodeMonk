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
void printLevel(node* root)
{
    list < node* > myList;
    myList.push_back(root);
    while(myList.size()!=0)
    {
        cout<<myList.front()->data<<" ";
        if(myList.front()->left!=NULL)
        {
            myList.push_back(myList.front()->left);
        }
        if(myList.front()->right!=NULL)
        {
            myList.push_back(myList.front()->right);
        }
        myList.pop_front();
    }
    myList.clear();
    return;
}
void getProductSum(node* root)
{
    int result=1;
    list < node* > myList;
    myList.push_back(root);
    while(true)
    {
        int levelnodenum=myList.size();
        if(levelnodenum==0)
        {
            break;
        }
        int sum=0;
        while(levelnodenum>0)
        {
            if(myList.front()->left==NULL&&myList.front()->right==NULL)
            {
                //cout<<myList.front()->data<<" ";
                sum+=myList.front()->data;
                if(myList.front()->left!=NULL)
                {
                    myList.push_back(myList.front()->left);
                }
                if(myList.front()->right!=NULL)
                {
                    myList.push_back(myList.front()->right);
                }
                myList.pop_front();
                levelnodenum--;
            }
            else
            {
                //cout<<myList.front()->data<<" ";
                if(myList.front()->left!=NULL)
                {
                    myList.push_back(myList.front()->left);
                }
                if(myList.front()->right!=NULL)
                {
                    myList.push_back(myList.front()->right);
                }
                myList.pop_front();
                levelnodenum--;
            }

        }
        if(sum!=0)
        {
            result*=sum;
        }
    }
    cout<<result<<" ";
    myList.clear();
}
int main()
{
    node* root=getNode(2);
    root->left=getNode(7);
    root->right=getNode(5);
    root->left->left=getNode(8);
    root->left->right=getNode(6);
    root->left->right->left=getNode(1);
    root->left->right->right=getNode(11);
    root->right->right=getNode(9);
    root->right->right->left=getNode(4);
    root->right->right->right=getNode(10);
    cout<<"Inorder Traversal of the Tree : ";
    inOrder(root);
    cout<<endl;
    cout<<"Level Order Traversal of Tree : ";
    printLevel(root);
    cout<<endl;
    cout<<"Product of Sums at Same Level : ";
    getProductSum(root);
    cout<<endl;
    return 0;
}
