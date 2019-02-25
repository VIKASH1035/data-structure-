#include<iostream>
using namespace std;
int main()
{
    int ar[200],i,j,sz,temp,loc,mini;
      cout<<"\n\n\t\tNAME: VIKASH \t UID: 17BCS1035";
    cout<<"\n\tEnter array size:";
    cin>>sz;
    cout<<"\n\tenter array elements:";
    for(i=0;i<sz;i++)
    {
        cin>>ar[i];

    }
    for(i=0;i<(sz-1);i++)
    {

        mini=ar[i];
        loc=i;
        for(j=i+1;j<sz;j++)
        {

            if(ar[j]<mini)
            {

                mini=ar[j];
                loc=j;
            }
        }
        temp=ar[i];
        ar[i]=ar[loc];
        ar[loc]=temp;
    }
    cout<<"\n\tUsing Selection Sort In Assending Order:";
    for(i=0;i<sz;i++)
    {

        cout<<ar[i]<<" ";
    }
    return 0;

}
