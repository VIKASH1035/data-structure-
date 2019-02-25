#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
	int player_id;
	Node * next;
};

int main(int argc, char const *argv[])
{
    Node * head,*ptr,*new_node;
	int n,k,i,counts;
	cout<<"enter no. of players:";
	cin>>n;
	cout<<"enter value of k(every kth player will be eliminated): ";
	cin>>k;

	 head->player_id=1;
	 ptr=head;
	 for (i = 2; i <= n; ++i)
	 {
	 	ptr->next=new node();
	 	new_node->player_id=i;
	 	new_node->next=head;
	 	ptr=new_node;
	 }
	 for (counts = n; counts >1; counts--)
	 {
	   for (int i = 0; i < k-1; ++i)
	   {
	     ptr=ptr->next;
	   }
	   ptr->next=ptr->next->next;
	 }
	 cout<<"\n winner is the player :";
	 cout<<ptr->player_id;
	return 0;
}
