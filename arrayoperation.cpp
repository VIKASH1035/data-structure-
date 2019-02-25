#include<iostream>
using namespace std;
int main()
{
    int N,p,k,c,item;
    int arr[50];
    cout<<"\n enter the number of element in array";
    cin>>N;
    cout<<" \n enter the elements of array"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];

    }
    cout<<" \n elements of array are:";
    for(int j=0;j<N;j++)
    {

        cout<<arr[j]<<" ";
    }
    cout<<" \n  \t MENU \t"<<endl;
    cout<<" \n \t Press 1 FOR Insertion"<<endl;
    cout<<" \n \t Press 2 FOR Traversing"<<endl;
    cout<<" \n \t Press 3 FOR Searching   "<<endl;
    cout<<" \n \t Press 4 FOR Deletion "<<endl;
    cin>>p;
    switch(p)
    {
    case 1:

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
       for( int i=0;i<N;i++)
       {

           cout<<arr[i]<<"\t";
       }
   break;
    case 2:

    for( int j=0;j<N;j++)
    {
        arr[j]=arr[j]*2;

    }
    cout<<" \n elements of array after traversing:";
    for( int j=0;j<N;j++)
    {

        cout<<arr[j]<<" ";
    }
    break;
    case 3:
        cout<<"enter the element you want to search";
        cin>>k;
        for(int i=0;i<N;i++)
        {
            if(arr[i]==k)
            {
                cout<<"element is present at position "<<i;

            }
            else{
                cout<<"element is not present in array ";
                return 0;
            }

        }
      break;
    default:
        cout<<"no operation is applied";
        return 1;
    }
    return 0;
}
