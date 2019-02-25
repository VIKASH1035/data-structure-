#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[6][6];
	int p[20][20];
	cout<<"enter elements:";
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"our elements:";
	
		for(int i=0;i<6;i++)
	{   
	   cout<<"\n";
		for(int j=0;j<6;j++)
		{
			cout<<a[i][j]<<" ";
		}
	}
 
	for(int i=1;i<5;i++)
	{
		for (int j=1;j<5;j++)
		 {
		 cout<<(a[i][j]+a[i-1][j]+a[i-1][j-1]+a[i-1][j+1]+a[i+1][j+1]+a[i+1][j]+a[i+1][j-1]);
		 cout<<"\n";
		    
		 }
	}
}
