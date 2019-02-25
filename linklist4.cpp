#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node (int data)
	{
		this->data=data;
		next=NULL;
	}
};
Node * insert()
{  
	Node * head=NULL;
	Node * tail=NULL;
	int data;
	cin>>data;
	while(data!=-1){
		Node * newNode= new Node(data);

	if(head==NULL)
	{
        head=newNode;
        tail=newNode;
	}else
	{   tail->next=newNode;
		tail=newNode;
	}
	cin>>data;
}

return head;
}

Node * Insert_In_Begining(Node* head,int data)
{
	Node * temp = head;
	Node * newNode= new Node(data);
	newNode->next=temp;
	head=newNode;
  return head;
}
Node * Insert_In_Before(Node* head,int data)
{
	int val;
	Node * temp=head;
     Node* prepoint=NULL;
	cout<<"enter value:";
	cin>>val;
   Node* newNode = new Node(data);
   while(temp->data!=val)
   {
   	prepoint=temp;
   	temp=temp->next;
   }
   prepoint->next=newNode;
   newNode->next=temp;

  return head;
}
Node * Insert_In_last(Node* head,int data)
{
	Node * temp = head;
	Node * newNode= new Node(data);
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newNode;

  return head;
}
Node * delete_in_beg(Node*  head)
{
	Node *  temp=head;
     head=head->next;
     free(temp);
     return head;
}
Node * delete_in_end(Node*  head)
{
	Node* temp=head;
	Node* prepointer;
	while(temp->next!=NULL)
	{
		prepointer=temp;
		temp=temp->next;
	}
	prepointer->next=NULL;
	free(temp);
	return head;
}
Node* reverse(Node*  head)
{
	Node * temp=head;
	Node * p=NULL;
	Node * n;
	while(temp!=NULL)
	{
		n=temp->next;
		temp->next=p;
		p=temp;
		temp=n;
	}
	head=p;
	return(head);
}

void print(Node * head)
{   Node * temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main()
{
	Node * head;
	head=insert();
	print(head);
	cout<<"\n";
	head=Insert_In_Begining(head,45);
		cout<<"\n";
	print(head);
	head=Insert_In_last(head,94);
		cout<<"\n";
	print(head);
	head=Insert_In_Before(head,55);
		cout<<"\n";
	print(head);
	head=delete_in_beg(head);
		cout<<"\n";
	print(head);
	head=delete_in_end(head);
		cout<<"\n";
	print(head);
	head=reverse(head);
		cout<<"\n";
	print(head);
	return 0;
}

