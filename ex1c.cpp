#include<iostream>
using namespace std;
int main()
{
    int arr[20];
     int i,n,p;
     int flag=0;
      cout<<"\n\n\t\tNAME: AJAY \t UID: 17BCS1026";
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
     cout<<"\n\t\tEnter the no. u want to find the location:  ";
     cin>>p;
     for(i=0;i<n;i++)
     {
         if(p==arr[i])
         {
             flag=1;
            cout<<"location are:"<<i+1<<" "<<endl;
         }

     }
     if(flag!=1)
     {
         cout<<"\n\t\tElement is not in this array";
     }
     return 0;
}
