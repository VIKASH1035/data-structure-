#include<iostream>
using namespace std;
int main()
{

    int a,t;

   cin>>t;
   for(int i=0;i<t;i++)
   {
    int sum=0,rem;
    cin>>a;
   while(a>0)
   {
       rem=a%10;
       sum=sum+rem;
       a=a/10;
   }
   cout<<sum<<"\n";
   }
   return 0;
}
