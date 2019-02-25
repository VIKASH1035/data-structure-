#include<bits/stdc++.h>

using namespace std;
int queues[50];
int front=-1,rear=-1;
void insertion()
{
	int num;
	cin>>num;

    if (front==-1 && rear==-1)
	{
		front=rear=0;
	}
	else
		rear++;
	queues[rear]=num;
}
 int  deletion()
 {
 	int val;

 	if(front==-1 || front>rear)
 	{
 		cout<<"underflow";
 		return -1;
     }
     else
     {
     	val=queues[front];
     	front++;
     	if(front>rear)
     		front=rear=-1;
     	return val;
     }

 }
 int peek()
 {
 	if (front==-1 || front>rear)
 	{
 		cout<<"queue is impty";
 		return -1;
 	}
 	else
 		return queues[front];
 }
 void display()
 {
 	int i;
 	if (front==-1 || front>rear)
 	{
 		cout<<"queue is impty";

 	}
 	else
 	{
 		for (int i = front; i <= rear; ++i)
 		{
 			cout<< queues[i]<<" ";
 		}
 	}

 }


int main()
{
  int val,t;
  cout<<"enter no. u wants u to insert";
  cin>>t;
  while(t--)
  {
      insertion();
  }
    val = deletion();
    cout<<"\n";
    display();
    cout<<"\n";
   val= peek();
   cout<<val;
    return 0;
}
