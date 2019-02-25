#include<bits/stdc++.h>
using namespace std;
class Node
{ public:
	int roll_no;
	string name;
	 long   mob_no;
	Node *next;
	Node(int r,string s,long m)
	{
		this->roll_no=r;
		this->name=s;
		this->mob_no=m;
		next=NULL;
	}
};
Node* insert()
{
	Node * head=NULL;
	Node * tail=NULL;
	int roll;
	long mob;
	string name;
	cout<<"enter roll number:";
	cin>>roll;
	cout<<"enter name:";
	cin>>name;
	cout<<"enter uid no:";
	cin>>mob;
	while(roll!= -1)
	{
		Node * newnode = new Node(roll,name,mob);
			if(head==NULL)
	{
        head=newnode;
        tail=newnode;
	}else
	{   tail->next=newnode;
		tail=newnode;
	}
	cout<<"\n enter roll number:";
	cin>>roll;
	if(roll!=-1){
	cout<<"enter name:";
	cin>>name;
	cout<<"enter uid no:";
	cin>>mob;}
		
}
return head;
}
void print(Node * head)
{  cout<<"\nRollNo.    Name       uid no.";
	Node * temp = head;
	while(temp!=NULL)
	{
		cout<<"\n"<<  temp->roll_no<<"       ";
		cout<<  temp->name<<"           ";
		cout<<  temp->mob_no<<"";
		temp=temp->next;
	}
}

int main()
{
	Node * head;
	head=insert();
	print(head);
}

