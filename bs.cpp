#include<bits/stdc++.h>
using namespace std;
int smallst(int arr[] ,int k,int n)
{
	int pos=k,small=arr[k],i;
	for(i=k+1;i<n;i++)
	{
		if (arr[i]<small)
		{
			small=arr[i];
			pos=i;
		}
	}
	return pos;
}
void selection_sort(int arr[],int n)
{
	int k,pos,temp;
	for ( k = 0; k < n; k++)
	{
		pos=smallst(arr,k,n);
		temp=arr[k];
		arr[k]=arr[pos];
		arr[pos]=temp;
	}
}
int main(int argc, char const *argv[])
{
	int arr[100],num,i,n,beg,end,mid,found=0;
	cout<<"Enter no. of element in array:";
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	selection_sort(arr,n);
	cout<<"\nSorted array is:";
	for (int i = 0; i < n; ++i)
	{
	  cout<<arr[i]<<" ";
	}
	cout<<"\nEnter the number to be Searched:";
     cin>>num;
     beg=0;
     end=n-1;
     while(beg<=end)
     {
     	mid=(beg+end)/2;
     	if (arr[mid]==num)
     	{
     		cout<<" "<<num<<" is present at position "<<mid+1;
     		found=1;
     		break;
     	}
     	else if(arr[mid]>num)
     	{
     		end=mid-1;
     	}
     	else
     		beg=mid+1;
     }
     if(beg>end && found==0)
     {
    cout<<"\n element is not present in array";
     }
	return 0;
}
