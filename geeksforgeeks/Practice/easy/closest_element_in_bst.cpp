#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <iterator>
#include <utility>
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
node* insert(node* root,int idata)
{
	if(root==NULL)
	{
		return getnode(idata);
	}
	if(idata<=root->data)
	{
		root->left=insert(root->left,idata);
	}
	else
	{
		root->right=insert(root->right,idata);
	}
	return root;
}
pair <int ,int > myPair(10000000,0);
void findClosest(node* root,int k)
{
	if(root==NULL)
	{
		return;
	}
	findClosest(root->left,k);
	int dif=abs(root->data-k);
	if(dif<myPair.first)
	{
		myPair.first=dif;
		myPair.second=root->data;
	}
	findClosest(root->right,k);
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
		node* root=NULL;
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
			root=insert(root,arr[i]);
		}
		int k;
		cin>>k;
		findClosest(root,k);
		cout<<myPair.second<<endl;
	}
	return 0;
}