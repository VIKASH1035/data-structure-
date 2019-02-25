#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<=n;i++)
	{
		arr[i]=i;
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=n;j++)
		{
			if(arr[j]%i==0)
			{
				if(arr[i]%arr[j]!=0)
				{
					cout<<arr[j]<<"\n";
				}
			}
			
		}
	}
	
}
