#include<iostream>
using namespace std;
int find_max(int arr[10],int n)
{
    int i,large=arr[0],pos=0;
    for(i=1;i<n;i++)
    {
        if(arr[i]>large)
         {

          large=arr[i];
           pos=i;
        }
        return pos;
    }
}
int find_min(int arr[10],int n)
{
    int j=0,small=arr[0],pos=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
            pos=i;
        }
        return pos;
    }

}
void interchange(int arr[10],int n)
{
    int temp , lp,hp;
    lp=find_min(arr,n);
    hp=find_max(arr,n);
    temp=arr[hp];
    arr[hp]=arr[lp];
    arr[lp]=temp;
}
int main()
{ int n,arr[20];
    cout<<"enter number of elements";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
     interchange(arr,n);
      for(int i=0;i<n;i++)
    {
        cout<<arr[i];

    }
    return 0;
}
