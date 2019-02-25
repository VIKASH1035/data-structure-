#include<iostream>
#include<string>
using namespace std;
int main()
{
	string j,s;
	int count =0;
	cout<<"enter j:";
	cin>>j;
	cout<<"\n enter s:";
	cin>>s;
	 for(int i=0;i<s.length();i++)
        {
           for(int p=0;p<j.length();p++)
           {
               if(s[i]==j[p])
               {
                  count++; 
               }
               
           }
        }
        cout<<"common elements:"<<count;
	
	return 0;
}
