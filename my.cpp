#include<iostream>
using namespace std;
int main()
{
	long long n,sum=0;
	cin>>n;
	long long arr[n];
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<n;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}
	for(int i=0;i<n;i++)
	{
	   cout<<arr[i]<<" ";
	}
	
		for(int i=2;i<34;i++)
	{
		if(arr[i]%2==0)
		{ 
		  sum=sum+arr[i];
		}
	}
	cout<<endl;
	cout<<sum;
	
	return 0;
}
