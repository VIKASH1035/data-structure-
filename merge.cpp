#include<iostream>
#define size 100
using namespace std;
void merges(int arr[],int beg,int mid,int ends);
void merge_sort(int arr[],int beg,int ends );
int main()
{
    int arr[size];
    int i,n;
    cout<<"\n\t NAME: VIKASH   UID:17BCS1035";
    cout<<"\n Enter number of elements:";
     cin>>n;
     for(i=0;i<n;i++)
     {   cout<<" \t";
         cin>>arr[i];
     }
     merge_sort(arr,0,n-1);
     for(i=0;i<n;i++)
     {

         cout<<" \t "<<arr[i]<<" ";
     }
     return 0;
}
void merges(int arr[],int beg,int mid,int ends)
{
    int i=beg;
    int j=mid+1;
    int index=i;
    int temp[size],k;
   while(i<=mid && j<=ends)
    {
        if(arr[i]<arr[j])
        {
            temp[index]=arr[i];
            i++;
        }
        else
        {

          temp[index]=arr[j];
           j++;
        }
        index++;
    }
    if(i>mid)
    {
        while(j<=ends)
        {
            temp[index]=arr[j];
            j++;
            index++;
        }
    }
    else
        while(i<=mid)
    {
        temp[index]=arr[i];
        i++;
        index++;
    }
    for(k=0;k<index;k++)
    {
        arr[k]=temp[k];
    }
}

void merge_sort(int arr[],int beg,int ends)
{ int mid;
    if(beg<ends)
    {
        mid=(beg+ends)/2;
        merge_sort(arr,beg,mid);
        merge_sort(arr,mid+1,ends);
        merges(arr,beg,mid,ends);
    }
}
