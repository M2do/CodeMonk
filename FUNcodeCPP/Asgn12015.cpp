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
	node* temp = new node;
	temp->data = idata;
	temp->left = NULL;
	temp->right = NULL;
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
		root->left = insert(root->left,idata);
	}
	else
	{
		root->right = insert(root->right,idata);
	}
	return root;
}
void preOrder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<setw(2)<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}
void inOrder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	inOrder(root->left);
	cout<<setw(2)<<root->data<<" ";
	inOrder(root->right);
}
void printBST(node* root)
{
	cout<<"    "<<"Preorder  : ";
	preOrder(root);
	cout<<"\n    "<<"Inorder   : ";
	inOrder(root);
}
void getSuccessor(node* root,node* &suc,int idata)
{
	if(root==NULL)
	{
		return;
	}
	if(root->data == idata)
	{
		if(root->right!=NULL)
		{
			node* temp = root->right;
			while(temp->left)
			{
				temp=temp->left;
			}
			suc = temp;
		}
		return;
	}
	else if(idata<root->data)
	{
		suc = root;
		getSuccessor(root->left,suc,idata);
	}
	else
	{
		getSuccessor(root->right,suc,idata);
	}
}
void getPredeccessor(node* root,node* &pre,int idata)
{
	if(root==NULL)
	{
		return;
	}
	if(root->data == idata)
	{
		if(root->left!=NULL)
		{
			node* temp = root->left;
			while(temp->right)
			{
				temp=temp->right;
			}
			pre = temp;
		}
		return;
	}
	else if(idata<root->data)
	{
		getPredeccessor(root->left,pre,idata);
	}
	else
	{
		pre = root;
		getPredeccessor(root->right,pre,idata);
	}
}
node* getLCA(node* root,int n1,int n2)
{
	if (root == NULL)
	{
		return NULL;
	}
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }
    node *left_lca  = getLCA(root->left, n1, n2);
    node *right_lca = getLCA(root->right, n1, n2);
    if (left_lca && right_lca)  
    {
    	return root;
    }
    return (left_lca != NULL)? left_lca: right_lca;
}
void printRange(node* root,int x,int y)
{
	if(root==NULL)
	{
		return;
	}
	printRange(root->left,x,y);
	if(root->data>=x&&root->data<=y)
	{
		cout<<setw(2)<<root->data<<" ";
	}
	printRange(root->right,x,y);
}
void printFancy(node* root,string space)
{
	if(root==NULL)
	{
		cout<<"NULL"<<endl;
		return;
	}
	space = space+"   ";
	cout<<root->data<<endl;
	cout<<space<<"L==>";
	printFancy(root->left,space);
	cout<<space<<"R==>";
	printFancy(root->right,space);
}
int main()
{
	int n;
	cin>>n;
	cout<<"n = "<<n<<endl;
	node* root=NULL;
	int num;
	cout<<"+++ Insert  :  ";
	for(int i=0;i<n;i++)
	{
		cin>>num;
		root=insert(root,num);
		cout<<num<<" ";
	}
	cout<<"\n\n\n+++ The BST created has the following listings "<<endl;
	printBST(root);
	string space="";
	cout<<"\n+++ The following fancy printing of the BST is not for submission."<<endl;
	cout<<"+++ You may implement it as a take-home programming exercise."<<endl;
	printFancy(root,space);
	int x,y;
	cin>>x>>y;
	cout<<"\n\nx = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	node* suc = NULL;
	node* pre = NULL;
	getSuccessor(root,suc,x);
	getPredeccessor(root,pre,y);
	if(suc)
	{
		cout<<"\n+++ Search1("<<x<<")  : "<<suc->data<<endl;
	}
	else
	{
		cout<<"\n+++ Search1("<<x<<")  : "<<"Not Found"<<endl;
	}
	if(pre)
	{
		cout<<"\n+++ Search2("<<y<<")  : "<<pre->data<<endl;
	}
	else
	{
		cout<<"\n+++ Search2("<<y<<")  : "<<"Not Found"<<endl;
	}
	node* lca = getLCA(root,suc->data,pre->data);
	cout<<"\n+++ lca("<<suc->data<<", "<<pre->data<<")  : "<<lca->data;
	cout<<"\n+++ Values in T between "<<x<<" and "<<y<<" are  : ";
	printRange(root,x,y);
	cout<<endl;
	return 0;
}