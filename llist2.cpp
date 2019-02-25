#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
	int data;
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
	Node* tail=NULL;
   int data;
   cin>>data;
   while(data!=-1)
   {
   	Node * newnode = new Node(data);
   	if(head==NULL)
   	{
   		head=newnode;
   		tail=newnode;
   	}
   	else
   	{
   		tail->next=newnode;
   		tail=newnode;
   	}
   	cin>>data;
   }
   return(head);

}
Node * insert_at_beg(Node* head,int data)
{
	Node* temp=head;
	Node* newnode = new Node(data);
	newnode->next=temp;
	head=newnode;
	return(head);
}
Node * insert_at_last(Node* head, int data)
{
	Node * temp=head;
	Node* newnode =new Node(data);
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	return(head);
}
Node * insert_before(Node* head, int data)
{    Node* prepoint;
	Node* temp=head;
	Node * newnode= new Node(data);
		cout<<"enter value before u  want insert :";
	int val;
	cin>>val;
	while(temp->data!=val)
	{   prepoint=temp;
		temp=temp->next;
	}
	prepoint->next=newnode;
	newnode->next=temp;
	return(head);
}
Node* insert_after(Node* head, int data)
{
	Node * temp=head;
	Node *postpoint;
	Node * newnode = new Node(data);
	int val;
	cout<<"enter value after u  want insert :";
	cin>>val;
	while(temp->data!=val)
	{postpoint=temp->next;
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->next=postpoint;
	return(head);
}
 Node* delete_beg(Node* head)
 {
 	Node * temp=head;
 	head=head->next;
 	free (temp);
 	return(head);
 }
 Node* delete_end(Node* head)
 {
 	Node * temp=head;
 	Node * prepoint;
 	while(temp->next!=NULL)
 	{
 		prepoint=temp;
 		temp=temp->next;
 	}
 	prepoint->next=NULL;
 	free(temp);
 	return(head);
 }
 Node* reverse(Node*  head)
 {
 	Node* temp=head;
 	Node *p=NULL;
 	Node* n;
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
 Node* insert_at_pos(Node* head,data)
 {
 	Node* temp= head;
 	Node* postpoint;
 	Node* newnode= new Node(data);
 	int val,pos=0;
 	cin>>val;
 	while(pos!=val)
 	{
 		postpoint=temp->next->next;
 		temp =temp->next;
 		pos++;
 	}
 	temp->next=newnode;
 	newnode->next=postpoint;
 	return(head);
 }
 void print(Node*head)
 {
 	Node* temp=head;
 	while(temp->next!=NULL)
 	{
 		cout<<temp->data<<" ";
 		temp=temp->next;
 	}
 }
 int main()
 {
 	Node * head;
 	head = insert();
 	print(head);
 	cout<<"\n";
 	head=insert_at_pos(head,88);
 	print(head);
 	cout<<"\n";
 	head = insert_at_beg(head,1);
 	print(head);
 	cout<<"\n";
    head = insert_at_last(head,99);
    print(head);
    cout<<"\n";
    head = insert_before(head,50);
    print(head);
    cout<<"\n";
    head = insert_after(head,70);
    print(head);
    cout<<"\n";
    head = delete_beg(head);
    print(head);
    cout<<"\n";
    head = delete_end(head);
    print(head);
    cout<<"\n";
    head = reverse(head);
    print(head);
    return 0;
 }
