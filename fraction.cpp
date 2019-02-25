#include<iostream>
using namespace std;
int main()
{
	int n,p=0,q=0,z=0;
	 double r1,r2,r3;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]>0)
		{ 
		  p=p+1;
		}
		else if(arr[i]==0)
		{
			z++;
		}
		else if(arr[i]<0)
		{
			q++;
		}
		
	}
	r1= (double)p/n;
	r2= (double)q/n;
	r3=(double)z/n;
	cout<<r1<<endl;
	cout<<r2<<endl;
	cout<<r3;
	return 0;
}
