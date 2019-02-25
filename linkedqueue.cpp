#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
	int data;
	Node * next;
	Node(int data)
	{
		this->data=data;
		next=NULL;

	}
};

class queues
{
public:

	Node * fronts;
	Node * rear;

};

queues * insertion(queues * q,int data)
{
	Node * newnode = new Node( data);
	if (q->fronts==NULL)
	{
		q->fronts=newnode;
		q->rear=newnode;
	}
	else
	{
		q->rear->next=newnode;
		q->rear=newnode;
	}
	return q;
}
queues * deletion(queues *q)
{
	Node * ptr;
	ptr=q->fronts;
	if (ptr==NULL)
	{
		cout<<"underflow";
	}
	else
	{
		q->fronts=q->fronts->next;
		cout<<"value being  is deleted: "<<ptr->data;
		free(ptr);
	}
	return q;
}
queues * display(queues * q)
{
	Node * ptr;
	ptr=q->fronts;
	if (ptr==NULL)
	{
		cout<<"\n queues is empty";

	}
	else
	{
		while(ptr!=q->rear)
		{
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
		cout<<ptr->data<<" ";
	}

}
int peek(queues *q)
{
	if (q->fronts == NULL)
	{
		cout<<"\n queues is empty";

	}
	else
		return q->fronts->data;
}
int main()
{
	int val,num,p;
	queues * q;


	  q=insertion(q,45);
	  q=insertion(q,46);
	  q=insertion(q,47);
	  q=insertion(q,48);
	  q=insertion(q,49);
	  q=insertion(q,50);

     q=display(q);
    cout<<"enter no. of element want to delete:";
    cin>>num;
    while(num--)
    	{q=deletion(q);}
       q=display(q);
    cout<<"\n";
  p=peek(q);
    cout<<"peek element is:"<<p;
    return 0;

}
