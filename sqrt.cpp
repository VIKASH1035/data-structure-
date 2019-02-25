#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {long int n,a=0;
  cin>>n;

      a=sqrt(n);


  cout<<a<<endl;
 }
 return 0;
}
int sqrt(int n)
{
    int a=0;
 if(n==0||n==1)
 return n;
 for(int i=1;a<=n;i++)
 {
 a=i*i;
 }
 return a;
}

