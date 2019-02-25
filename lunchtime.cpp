#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,delay=0,diff=0;
		int p,q;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>p>>q;
			diff=q-p;
			if(diff>5)
				{delay++;}

		}
		cout<<delay;
	}
	return 0;
}
