#include<iostream>
using namespace std;
int main()
{
    int arr[20];
     int i,n,pos;
      cout<<"\n\n\t\tNAME: VIKASH \t UID: 17BCS1035";
     cout<<"\n\t\tEnter the number of elements:  ";
     cin>>n;
     cout<<"\n\t\tEnter the elements of array";
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
        cout<<"\t\t\t\t\t   ";
     }
     cout<<"\n\t\t The elements of array are:  ";
     for(i=0;i<n;i++)
     {
         cout<<arr[i]<<"\t";
     }
     cout<<"\n\t\tEnter the position at which u want Deletion:  ";
     cin>>pos;
     for(i=pos;i<n-1;i++)
     {
         arr[i]=arr[i+1];
     }
     n--;
     cout<<"\n\t\t The elements of array after Deletion are:   ";
     for(i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
     return 0;
}
