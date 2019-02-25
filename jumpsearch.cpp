#include<iostream>
#include<cmath>
using namespace std;
int main()
{  int aar[50];
    int n,val,low,step,high,pos,i;
    cout<<"enter size of array";
    cin>>n;
    cout<<"\n enter elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>aar[i];
    }
    cout<<"\nenter value :";
    cin>>val;

    step=sqrt(n);
    i=0;
    low=0;
    high=n;
    pos=-1;
while(i<step)
{
    if(val<aar[step])
    {
        high=step-1;
    }
    else
    {
        low=step+1;
    }
    i++;

}
i=low;
cout<<i;
while(i<=high)
{
    if(aar[i]==val)
    {
        pos=i;
        cout<<"\nposition is:"<<i+1;
    }
    i++;
}
if(pos==-1)
{
    cout<<"\nvalue is not in array";
}
    return 0;
}
