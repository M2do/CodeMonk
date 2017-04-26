#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <iterator>
using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};

node* getnode(int idata)
{
	node* temp=new node;
	temp->data=idata;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

node* arrBst(int arr[],int l,int h)
{
	if(l>h)
	{
		return NULL;
	}
	int mid=l+(h-l)/2;
	node* root=getnode(arr[mid]);
	root->left=arrBst(arr,l,mid-1);
	root->right=arrBst(arr,mid+1,h);
	return root;
}

void inOrder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	inOrder(root->left);
	cout<<setw(2)<<root->data<<"  ";
	inOrder(root->right);
}

vector < int > vec;

void preOrder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<setw(2)<<root->data<<"  ";

	vec.push_back(root->data);
    preOrder(root->left);
	preOrder(root->right);
}

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int size;
		cin>>size;
		int arr[size];
		int temparr[size];
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
			temparr[i]=arr[i];
		}
		sort(arr,arr+size);
		node* root=arrBst(arr,0,size-1);
		cout<<"In-order Traversal of the above tree is :  ";
		inOrder(root);
		cout<<endl;
		cout<<"Preorder Traversal of the above tree is :  ";
		preOrder(root);
		cout<<endl;
		int i=0;
		for(i=0;i<size;i++)
		{
			if(temparr[i]!=vec[i])
			{
				cout<<"0"<<endl;
				break;
			}
		}
		if(i==size)
		{
			cout<<"1"<<endl;
		}
		vec.clear();
	}
	return 0;
}