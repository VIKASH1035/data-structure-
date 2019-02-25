#include<iostream>
using namespace std;
int swap(int &a,int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
	return a;
}
int main()
{
	int t,n,x,s;
cin>>t;
	while(t--)
	{
	    cin>>n;
		cin>>x;
		cin>>s;
		int z;
		for(int i=0;i<s;i++)
    {
		 int p;
         cin>>p;
         z= swap(x,p);
    }
    cout<<z;
    }
	return 0;
}
