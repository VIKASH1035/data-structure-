#include<bits/stdc++.h>
using namespace std;
class Node
{

public:
	int data ;
	Node* next;
	Node(int data)
	{
		this->data=data;
		next=NULL;
	}

};
Node* insert()
{
	Node* head=NULL;
	Node* temp= NULL;
	int data;
	cin>>data;
	while(data!=-1)
	{
		Node* newnode = new Node(data);

      if(head==NULL)
      {
      	newnode->next=newnode;
      	head =newnode;
      }
      else
      {
      	temp=head;
      	while(temp->next!=head)
      	{
      		temp=temp->next;

      	}
      	temp->next=newnode;
      	newnode->next=head;
      }
      cin>>data;
	}
	return(head);
}
Node* insert_at_beg(Node * head, int data)
{
	Node  * temp = head;
	Node* newnode = new Node(data);
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->next=head;
	 head=newnode;
	 return(head);
}
Node * insert_at_end(Node * head, int data)
{
	Node * temp=head;
	Node * newnode = new Node(data);
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->next=head;
	return(head);
}

void print(Node *head)
{
	Node* temp=head;
	cout<<head->data<<" ";
	while(temp->next!=head)
	{
		temp=temp->next;
		cout<< temp->data<<" ";

	}
}
int main()
{
	Node * head;
	head=insert();
	print(head);
	cout<<"\n";
	head = insert_at_beg(head,20);
	print(head);
	cout<<"\n";
	head = insert_at_end(head,99);
	print(head);
	return 0;
}
