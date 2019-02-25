#include<bits/stdc++.h>
using namespace std;
 int stk[30];
 int top=-1;
 void push(char);
 char pop();
 int main()
 {
 	char exp[20],temp;
 	int i,flag=1;
 	cout<<"enter an expression:";
 	gets(exp);
 	for(int i=0;i<strlen(exp);i++)
 	{
 		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
 			{push(exp[i]);}
 		if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
 			{
 				if(top==-1)
 					flag=0;
 				else
 				{
 					temp=pop();
 					if(exp[i]==')' && (temp=='{' || temp=='['))
 						flag=0;
 				   if(exp[i]=='}' && (temp=='(' || temp=='['))
 						flag=0;
 					if(exp[i]==']' && (temp=='{' || temp==')'))
 						flag=0;

 				}
 			}

 	}

   if(top>=0)
   	flag=0;
   if (flag==1)
   {
   	cout<<"valid expression";
   }
   else
   	cout<<"invalid expression";
   return 0;
 }
 void push(char c)
 {
 	top=top+1;
 	stk[top]=c;

 }
 char pop()
 {
 	return(stk[top--]);
 }
