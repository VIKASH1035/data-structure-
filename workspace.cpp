#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"\t Enter height:";
    cin>>n;


    for(int p=0;p<n;p++)
    {
        for(int i=0;i<n-p;i++)
        {
            cout<<" ";
        }
        for(int j=0;j<=p;j++)
        {
            cout<<"#";
        }
       cout<<"\n";
    }

    for(int p=n;p>=0;p--)
    {
        for(int i=0;i<n-p;i++)
        {
            cout<<" ";
        }
        for(int j=0;j<=p;j++)
        {
            cout<<"#";
        }

    }
    return 0;
}
