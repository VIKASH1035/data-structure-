#include <bits/stdc++.h>
using namespace std;
#define MAX 20
int st[MAX],top=-1;
void push(int st[],int val)
{
	if(top==MAX-1)
		{cout<<"overflow";}
	else
	{
		top++;
		st[top]=val;
	}
}
int pop(int st[])
{
	int val;
	if(top==-1)
		{cout<<"underflow";}
	else{
		val=st[top];
		top--;
		return val;
	}
}
void display(int st[])
{
	if(top==-1)
		{cout<<"stack is empty";
        }
	else
	{
		for(int i=top;i>=0;i--)
        {
            cout<<st[i]<<" ";
        }
   	}
}

int main()
{
	int val,n,p,s;
	cout<<"how much element want to insert:";
	cin>>n;
	cout<<"enter the number to be insert in stack: ";
	while(n!=0)
	{
	cin>>val;
	push(st,val);
	n--;
    }
    cout<<"how much element want to remove:";
	cin>>p;
	cout<<"\n removed elements are:";
	while(p!=0)
	{
		s=pop(st);
		cout<<s<<" ";
		p--;
	}
	cout<<"\n our stack is:";
	 display(st);
return 0;
}
