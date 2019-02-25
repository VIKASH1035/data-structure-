#include<iostream>
using namespace std;
int main()
{
    int n,r=0,t=0,l=0;
    cout<<"enter the number=";
    cin>>n;
    t=n;
    while(n!=0)
    {
        r=n%10;
        l=(l*10)+r;
        n=n/10;
    }
    if(l==t)
    {
        cout<<"yes it is palindrome";
    }
   else
   {
      cout<<"not";
    }
}
