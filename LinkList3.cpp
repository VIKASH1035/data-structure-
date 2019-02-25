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
	Node * newNode1= new Node(data);
	newNode1->next=temp;
	head=newNode1;
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
void print(Node * head)
{   Node * temp = head;
	while(temp!=NULL)
	{ cout<<" ";
		cout<<temp->data<<" "<<temp->next;
		temp=temp->next;
	}
}

int main()
{
	Node * head;
	head=insert();
	print(head);
	head=Insert_In_Begining(head,45);
	cout<<"\n";
	print(head);
	cout<<"\n";
	head=Insert_In_last(head,94);
	print(head);
}

