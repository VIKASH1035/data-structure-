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
	{
	    postpoint=temp->next->next;
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
  Node* insert_at_pos(Node* head,int data)
 {
 	Node* temp= head;
 	Node* postpoint;
 	Node* newnode= new Node(data);
 	int val,pos=1;
 	cout<<"\nenter position:";
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
 Node * searches(Node * head)
{
    Node * temp = head;
    int val,pos=0,flag=0;
    cout<<"\n enter value u want to search:";
    cin>>val;
    while(temp!=NULL)
    {
        if(temp->data==val)
        {
           flag =1;
            pos++;

            cout<<"\n At position:"<<pos<<" ";
        }
        else {
                pos++;

             }

        temp=temp->next;

    }
    if(flag==0)
    {
     cout<<"value is not present";
    }

    return(head);
}

 void print(Node*head)
 {
 	Node* temp=head;
 	 cout<<head->data<<" ";
 	while(temp->next!=NULL)
 	{    temp=temp->next;
 		cout<<temp->data<<" ";

 	}
 }
 int main()
 {
     cout<<"\t Name: Vikash\t UID: 17BCS1035\n";
 	Node * head;
 	head = insert();
 	print(head);
 	cout<<"\n";

 	head= insert_at_pos(head,25);
 	cout<<"insertion at given position:";
    print(head);
    cout<<"\n";
 	head = insert_at_beg(head,1);
 	cout<<"insertion at begining:";
 	print(head);
 	cout<<"\n";
    head = insert_at_last(head,99);
    cout<<"insertion at last:";
    print(head);
    cout<<"\n";
    head = insert_before(head,50);
    cout<<"insertion before a given value:";
    print(head);
    cout<<"\n";
    head = insert_after(head,70);
    cout<<"insertion after a  given value :";
    print(head);
    cout<<"\n";
    head = delete_beg(head);
    cout<<"deletion begining :";
    print(head);
    cout<<"\n";
    head = delete_end(head);
    cout<<"deletion ending :";
    print(head);
    cout<<"\n";
    head = reverse(head);
     cout<<"reversed linked list:";
    print(head);
    head=searches(head);
    cout<<"\n THANK YOU ";
    return 0;
 }

