#include<bits/stdc++.h>
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
class stack
{   Node *head;
  public:
  void push(int data)
   {
  if(head==NULL)
  {
    Node *newNode = new Node(data);
     head= newNode;
  }
  else 
  {
    Node *newNode = new Node(data);
    newNode->next=head;
    head=newNode;
  }
}

   int pop()
   {
    if(head==NULL)
    {
      return -1;
    }
    else
    { return head->data;
      head=head->next;
    }
   }
   void printx()
   {
    Node *temp = head;
    while(temp!=NULL)
    {
      cout<<temp->data<<" ";
      temp=temp->next;
    }
   }

};
 int main()
 {
     //cout<<"\t Name: Vikash\t UID: 17BCS1035\n";
 	Node * head;
  stack ob;
  ob.push(4);
  ob.push(5);
  ob.push(6);
  ob.push(7);
  cout<<ob.pop();
  ob.printx();
 
    return 0;
 }

