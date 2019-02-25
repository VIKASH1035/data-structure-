#include<bits/stdc++.h>
using namespace std;
void swaps(int &a, int &b)
    {
    int temp;
    temp=a;
    a=b;
     b=temp;
    }
int main()
{
    int arr[20];
    int n,i;
    int flag=0;

     cout<<"\n\n\t\tNAME: VIKASH \t UID: 17BCS1035";

    cout<<"\n\tEnter the number of element of array";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"\n\tarray before sorting: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n-i-1;j++)
       {
           if(arr[j]>arr[j+1])
            swaps(arr[j],arr[j+1]);
       }
    }
    cout<<"\n\n\tarray after sorting: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
   return 0;
}
