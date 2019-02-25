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
         for(int i=0;i<3;i++)
      {
        if((s1[i]=='b'||s2[i]=='b')&&(s1[i]=='o'||s2[i]=='o')&&(s1[i]=='b'||s2[i]=='b'))
        {
            flag=1;
            break;
        }
       if((s1[i]=='b'||s2[i]=='b')&&(s1[i]=='b'||s2[i]=='b')&&(s1[i]=='o'||s2[i]=='o'))
        {
            flag=1;
            break;
        }
        if((s1[i]=='o'||s2[i]=='o')&&(s1[i]=='b'||s2[i]=='b')&&(s1[i]=='b'||s2[i]=='b'))
        {
         flag=1;
         break;
        }
        else
            flag=0;
     }
        if(flag==1)
        {
            cout<<"yes";

        }
        else if(flag==0)
        {
            cout<<"No";
        }

    }

    return 0;
}
