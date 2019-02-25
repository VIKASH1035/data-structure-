#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		cout<<" *"<<endl;
	}
	for(int j=1;j<n;j++)
	{
		cout<<"#";
	}
	return 0;
}
