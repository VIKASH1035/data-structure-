#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[10][10];
	for(int i=0;i<10;i++)
	{
		int p=1;
        if(p%2!=0)
        {    p++;
        	arr[0][i]=p;
        }
		
	}
	for(int k=0;k<10;k++)
		{cout<<arr[0][k];}
	return 0;
}
