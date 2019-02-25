#include<iostream>
using namespace std;
int main()
{
    int ar[200],i,j,sz,temp,loc,maxi;
    cout<<"Enter array size:";
    cin>>sz;
    cout<<"enter array elements:";
    for(i=0;i<sz;i++)
    {
        cin>>ar[i];

    }
    for(i=0;i<(sz-1);i++)
    {

        maxi=ar[i];
        loc=i;
        for(j=i+1;j<sz;j++)
        {

            if(ar[j]>maxi)
            {

                maxi=ar[j];
                loc=j;
            }
        }
        temp=ar[i];
        ar[i]=ar[loc];
        ar[loc]=temp;
    }
    cout<<"\nUsing Selection Sort In Decending Order:";
    for(i=0;i<sz;i++)
    {

        cout<<ar[i]<<" ";
    }
    return 0;

}

