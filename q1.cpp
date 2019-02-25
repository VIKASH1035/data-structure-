#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter total no. of elements:";
	cin>>n;
	int arr1[n],arr2[n];
	cout<<"enter no. of shares:";
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	cout<<"\n enter price:";
		for(int i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(arr1[i]>arr2[j])
			{
				swap(arr1[i],arr1[i+1]);
				swap(arr2[i],arr2[i+1]);
			}
		}
	}
	int p;
	cout<<"\n enter no. of persons:";	
	cin>>p;
	
	int arr[p];
	cout<<"enter no. of share want to buy:";
	for(int j=0;j<p;j++)
	{
		cin>>arr[j];
	}
	for(int j=1;j<p;j++)
	{
		for(int i=n-1;i>=0;i++)
		{
			if(arr1[i]<=arr[j])
			{
				cout<<"\n share price is:";
				cout<<arr2[i];
				break;
			}
			break;
		}
	}
	return 0;
}
