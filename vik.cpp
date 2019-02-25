#include<iostream>
using namespace std;
int main()
{
    int t,flag=0;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>s1>>s2;

            int i=0;


        if((s1[i]=='b'||s2[i]=='b')&&(s1[i+1]=='o'||s2[i+1]=='o')&&(s1[i+2]=='b'||s2[i+2]=='b'))
        {
           cout<<"yes";
            continue;
        }
        if((s1[i]=='b'||s2[i]=='b')&&(s1[i+1]=='b'||s2[i+1]=='b')&&(s1[i+2]=='o'||s2[i+2]=='o'))
        {
            cout<<"yes";
            continue;
        }
        if((s1[i]=='o'||s2[i]=='o')&&(s1[i+1]=='b'||s2[i+1]=='b')&&(s1[i+2]=='b'||s2[i+2]=='b'))
        {
           cout<<"yes";
            
    }
        else
            cout<<"no";
     }

     return 0;
}

