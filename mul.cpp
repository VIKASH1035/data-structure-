#include<string>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"enter test case:";
    cin>>t;
    
    while(t--)
    { string s1;
        cin>>s1;
        for(int i=0;i<s1.length();i++)
        {
        
            if( i%2==0 && i<s1.length())
             {
             	cout<<s1[i];
	         }
	     }
	     cout<<" ";
	     for(int i=0;i<s1.length();i++)
	     {
	      if( i%2!=0 && i<s1.length())
          {
      	     cout<<s1[i];
	      }
	  }
	  
    }
  
    return 0;
}
