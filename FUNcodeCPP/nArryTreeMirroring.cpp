#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    list < node* > vec;
};
node* getNode(int idata)
{
    node* temp=new node;
    temp->data=idata;
    return temp;
}
void levelOrder(node* root)
{
    list < node* > myList;
    myList.push_back(root);
    int lvl=1;
    while(true)
    {
        cout<<"Level "<<lvl++<<" : ";
        int levelnodenum=myList.size();
        if(levelnodenum==0)
        {
            break;
        }
        while(levelnodenum>0)
        {
            node* temptop=myList.front();
            cout<<temptop->data<<" ";
            myList.pop_front();
            if(temptop->vec.size()!=0)
            {
                for(list < node* > ::iterator it=temptop->vec.begin();it!=temptop->vec.end();it++)
                {
                    myList.push_back(*it);
                }
            }
            levelnodenum--;
        }
        cout<<endl;
    }
    myList.clear();
}
int main()
{
    node* root=getNode(10);
    (root->vec).push_back(getNode(2));
    (root->vec).push_back(getNode(34));
    (root->vec).push_back(getNode(56));
    (root->vec).push_back(getNode(100));
    list < node* > ::iterator it=root->vec.begin();
    it++;
    it++;
    (*it)->vec.push_back(getNode(1));
    it++;
    (*it)->vec.push_back(getNode(7));
    (*it)->vec.push_back(getNode(8));
    (*it)->vec.push_back(getNode(9));
    
    levelOrder(root);
    return 0;
}
