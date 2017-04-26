#include <iostream>
using namespace std;
#define size 256
struct node
{
	char data;
	node* next,*prev;
};
node* getNode(char ch)
{
	node* temp = new node;
	temp->data = ch;
	temp->next = NULL;
	temp->prev = NULL;
	return temp;
}
void insertEnd(node** head,node** tail,char ch)
{
	node* temp = getNode(ch);
	if((*head) == NULL)
	{
		(*head) = (*tail) = temp;
		return;
	}
	(*tail)->next = temp;
	temp->prev = (*tail);
	(*tail) = temp;
	return;
}
void removeNode(node** head,node** tail,node* cur)
{
	if((*head) == NULL)
	{
		return;
	}
	if(cur == (*head))
	{
		(*head) = (*head)->next;
	}
	if(cur == (*tail))
	{
		(*tail) = (*tail)->prev;
	}
	if(cur->prev!=NULL&&cur->next!=NULL)
	{
		cur->next->prev = cur->prev;
		cur->prev->next = cur->next;
	}
	delete(cur);
}
void getChar(string str)
{
	bool repeated[size];
	node* array[size];
	node* head = NULL;
	node* tail = NULL;
	for(int i=0;i<256;i++)
	{
		repeated[i] = false;
		array[i] = NULL;
	}
	for(int i=0;i<str.length();i++)
	{
		char ch = str[i];
		//cout<<"Scanning character = "<<ch<<":"<<endl;
		if(!repeated[ch])
		{
			if(array[ch] == NULL)
			{
				insertEnd(&head,&tail,ch);
				array[ch] = tail;
			}
			else
			{
				removeNode(&head,&tail,array[ch]);
				array[ch] = NULL;
				repeated[ch] = true;
			}
		}
		if(head!=NULL)
		{
			//cout<<"The first non-repeating character so far : "<<head->data<<endl;
			cout<<head->data<<" ";
		}
		else
		{
			//cout<<"No such character is present yet"<<endl;
			cout<<-1<<" ";
		}
	}
	return;
}
int main() 
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        char ch;
        string str;
        string temp;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            str = str + temp;
        }
        cout<<endl;
        getChar(str);
    }
	return 0;
}