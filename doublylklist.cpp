#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
	Node* perv;
	Node(int data)
	{
		this->data=data;
		next=NULL;
		perv=NULL;
	}
};
Node* create()
{
	Node *  head = NULL;
	int num;
	cout<<"enter number:";
	cin>>num;
	while(num!=-1)
	{
		Node* newnode = new Node(num);
		if(head==NULL)
		{
			head=newnode;
		}
		else
		{
			Node * temp = head;
			while(temp->next!=NULL)
				{temp=temp->next;}
			temp->next=newnode;
			newnode->perv=temp;
			newnode->next=NULL;
		}
		cin>>num;
	}
	return(head);
}
Node * insert_at_beg(Node * head)
{
  int val;
  cout<<"\n enter value to be inserted: ";
  cin>>val;
  Node * newnode = new Node(val);
  head->perv=newnode;
  newnode->next=head;
  newnode->perv=NULL;
  head=newnode;
  return(head);
}
Node * insert_at_end(Node * head)
{
	int val;
	cout<<"\n enter no. to be inserted: ";
	cin>>val;
	Node * newnode = new Node(val);
	Node * temp=head;
	while(temp->next!=NULL)
		{temp=temp->next;}
	temp->next=newnode;
	newnode->perv=temp;
	newnode->next=NULL;
	temp=NULL;
   return(head);
}
Node* insert_at_pos(Node* head,int data)
{
	Node* temp=head;
	Node * preptr;
	Node * newnode= new Node(data);
  int pos;
  cout<<"\n enter position:";
  cin>>pos;
  for(int i=0;i<pos;i++)
  { preptr=temp;
  	temp=temp->next;
  }
  preptr->next=newnode;
  newnode->perv=preptr;
  newnode->next=temp;
  temp->perv=newnode;
  return(head);
}
Node *delete_at_beg(Node * head)
{
	Node * temp=head;
	temp=temp->next;
     free(head);
     head=temp;
     return(head);

}
Node * delete_at_end(Node * head)
{
	Node * temp=head;
	Node *preptr;
	while(temp->next!=NULL)
	{
		preptr=temp;
		temp=temp->next;
	}
	free(temp);
	preptr->next=NULL;
	return(head);
}

void display(Node* head)
{
	Node * temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}

}
int main()
{
	Node * head;
	head=create();
	display(head);
	head=insert_at_beg(head);
	display(head);

	head=insert_at_pos(head,66);
	display(head);
	head=insert_at_end(head);
	display(head);
	head=delete_at_beg(head);
	cout<<"\n";
	display(head);
	head=delete_at_end(head);
	cout<<"\n";
	display(head);

return 0;
}
