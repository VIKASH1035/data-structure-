//row major order
#include<iostream>
using namespace std;
int main()
{
    int i,j,w,address,p,q,r,s;
    int arr[100][100];
    cout<<"enter no. of rows and coloums";
    cin>>p>>q;

    cout<<"enter elements of matrix";
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            cin>>arr[i][j];

        }
    }
    cout<<"\n matrix is: ";
     for(i=0;i<p;i++)
    {
        cout<<"\n";
        for(j=0;j<q;j++)
        {
            cout<<arr[i][j]<<" ";

        }
    }
    cout<<"\n enter base address:";
    cin>>w;
    cout<<"\n enter  row and coloum for address:";
    cin>>r>>s;
    address= w+ sizeof(int)* (q*(r-1)+(s-1));
    cout<<address;

 return 0;
}

