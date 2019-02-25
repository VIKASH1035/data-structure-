#include<bits/stdc++.h>
using namespace std;

int stk[50];
	int top=-1;
	int pop();
	void push(int);

int main()
{
	int val,n,i,arr[20];
	cout<<"enter no. of elements in array:";
	cin>>n;
	cout<<"enter elements of array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		push(arr[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		val=pop();
		arr[i]=val;
	}
	cout<<"reversed array is:";
	for (int i = 0; i < n; ++i)
	{
	  cout<<arr[i]<<" ";
	}
	return 0;

}
 int pop()
 {
 	return(stk[top--]);

 }
 void push( int val)
 {
 	stk[++top]=val;
 }
