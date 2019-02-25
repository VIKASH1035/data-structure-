#include<bits/stdc++.h>
using namespace std;
class Node
{ public:

	int data;
	Node*preptr;
	Node*next;
	Node(int data)
	{
		this->data=data;
		preptr=NULL;
		next=NULL;
	}
};
Node * create()
{
	Node * head=NULL;
	int data;
	cin>>data;
	while(data!=-1)
	{
		Node* newnode= new Node(data);
		if(head==NULL)
		{
			head=newnode;
		}
		else
		{
			Node * temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
			newnode->preptr=temp;
		}
		cin>>data;
	}
	return head;
}
Node * insert_at_beg(Node * head,int data)
{
	Node * temp=head;
	Node * newnode = new Node(data);
	newnode->next=temp;
	temp->preptr=newnode;
	  head=newnode;
	  return(head);
}
 Node * insert_at_last(Node * head, int data)
 { Node * temp = head;
	Node * newnode = new Node(data);
	while(temp->next!=NULL)
	{
		temp= temp->next;
	}
	temp->next=newnode;
	newnode->preptr=temp;
	  return(head);
 }
 Node * remove_at_beg( Node * head)
{
  Node * temp = head;
   head= temp->next;
     free(temp);
     return(head);
}
  Node * remove_at_last(Node * head)
  {
  	Node * temp=head;
  	Node * preptr;
  	while(temp->next!=NULL)
  	{
      preptr=temp;
      temp=temp->next;
  	}
  	preptr->next=NULL;
  	free(temp);
  	return (head);
  }
 void print(Node *  head)
 {
	Node* temp=head;
	while(temp->next!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	 cout<<temp->data;
 }


 int main()
 {
	Node * head;
	head = create();
	print(head);
	cout<<"\n";
	head=insert_at_beg(head,45);
	print(head);
	cout<<"\n";
   head=insert_at_last(head,99);
	print(head);
   cout<<"\n";
   head = remove_at_beg(head);
   print(head);
   cout<<"\n";
   head = remove_at_last(head);
   print(head);
   cout<<"\n";
   return 0;
 }
