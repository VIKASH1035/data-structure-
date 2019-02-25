#include<iostream>
using namespace std;
int main()
{
    cout<<"\n\n\t\tNAME: VIKASH \t UID: 17BCS1035";
	int size, arr[50], i, j, temp;
	cout<<"\n \t\tEnter Array Size : ";
	cin>>size;
	cout<<"\n\t\tEnter Array Elements : ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}

	for(i=1; i<size; i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	cout<<"\n\tArray after sorting : ";
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
