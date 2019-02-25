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

        for(int j=0; j<3;j++)
        {
            int i=0;


        if((s1[i]=='b'||s2[i]=='b')&&(s1[i+1]=='o'||s2[i+1]=='o')&&(s1[i+2]=='b'||s2[i+2]=='b'))
        {
           flag=1;
            break;
        }
        if((s1[i]=='b'||s2[i]=='b')&&(s1[i+1]=='b'||s2[i+1]=='b')&&(s1[i+2]=='o'||s2[i+2]=='o'))
        {
            flag=1;
            break;
        }
        if((s1[i]=='o'||s2[i]=='o')&&(s1[i+1]=='b'||s2[i+1]=='b')&&(s1[i+2]=='b'||s2[i+2]=='b'))
        {
           flag=1;
            break;
        }

    }
        if(flag==1)
        {
            cout<<"yes";
        }
        else
            cout<<"no";
     }

     return 0;
}
