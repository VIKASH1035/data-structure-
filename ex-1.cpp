#include<iostream>
using namespace std;
int main()
{
    int arr[20];

    int k,N,c,item;
    cout<<"\n\n\t\tNAME: VIKASH \t UID: 17BCS1035";
     cout<<"\n\t\tENTER THE NUMBER OF ELLEMENTS IN ARRAY:";
    cin>>N;
    cout<<"\t\tENTER THE ELEMENT OF ARRAY:";
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
        cout<<"\t\t\t\t\t   ";
    }
     cout<<"\n\t\tARRAY ELEMENTS BEFORE INSERTION: ";
       for(int i=0;i<N;i++)
       {

           cout<<arr[i]<<"\t";
       }
      cout<<" \n\t\tENTER THE ELEMENT YOU WANT TO INSERT: ";
      cin>>item;
      cout<<"\n\t\tENTER THE POSITION AT U WANT TO INSERT: ";
       cin>>k;
       c=N;
       while(c>=k)
       {
           arr[c+1]=arr[c];
           c--;


       }
        arr[k]=item;
       N=N+1;
  cout<<"\t\tARRAY ELEMENTS AFTER INSERTION: ";
       for(int i=0;i<N;i++)
       {

           cout<<arr[i]<<"\t";
       }
       return 0;
}
