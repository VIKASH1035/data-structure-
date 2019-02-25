#include<iostream>
using namespace std;
int main()
{
	int arr[5],sum1=0,max=0,min=0,m[5];
	cout<<"enter elements:";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
		
	}
	for(int i=0;i<5;i++)
	{
		sum1=sum1+arr[i];
	}
	cout<<" \n total different sum:";
	for(int i=1;i<=5;i++)
	{
		m[i]=sum1-arr[i-1];
		cout<<m[i]<<"\n";
	}
		for(int i=1;i<=5;i++)
        {
        	max=m[i];
           for(int j=1;j<5;j++)
           {
           	if(m[j]>max)
             	{
			   
           	       max=m[j];
                }
		   }
		           
		}
			for(int i=1;i<=5;i++)
        {
        	min=m[i];
           for(int j=1;j<5;j++)
           {
           	if(m[j]<min)
             	{
			   
           	       min=m[j];
                }
		   }
		           
		}
		cout<<"maximum sum is:"<<max;
		cout<<"minimum sum is"<<min;
		return 0;
}
