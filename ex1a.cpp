#include<iostream>
using namespace std;
int main()
{
    char arr[20];

    int k,N,c,item;
     cout<<"\nENTER THE NUMBER OF ELEMENTS IN ARRAY:";
    cin>>N;
    cout<<"ENTER THE ELEMENT OF ARRAY\n";
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
     cout<<"ARRAY ELEMENTS BEFORE INSERTION:";
       for(int i=0;i<N;i++)
       {

           cout<<arr[i]<<"\t";
       }
      cout<<" \nENTER THE ELEMENT YOU WANT TO INSERT";
      cin>>item;
      cout<<"\nENTER THE POSITION AT U WANT TO INSERT";
       cin>>k;
       c=N;
       while(c>=k)
       {
           arr[c+1]=arr[c];
           c--;


       }
        arr[k]=item;
       N=N+1;
  cout<<"ARRAY ELEMENTS AFTER INSERTION:";
       for(int i=0;i<N;i++)
       {

           cout<<arr[i]<<"\t";
       }
       return 0;
}
