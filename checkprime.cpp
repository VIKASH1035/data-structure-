#include<iostream>
using namespace std;
int main()
{
	int i=2,n,flag=0;
	cin>>n;
	while(i<n/2)
	{
		if(n%i==0)
		{
			flag=1;
		}
		i++;
	}
	if(flag==0)
	{
		cout<<"it's a prime number";
		
	}
	else
	 cout<<"it's not a prime number";
	 return 0;
}
