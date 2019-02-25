#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cin>>d;
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int j=0;j<d;j++)
    {
        for(int i=0;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
    }
    int p=0;
    for (int i=n-d; i<n; i++)
    {
      arr[i]=temp[p];
      p++;
    }
      for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

   return 0;
}
