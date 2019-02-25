#include<iostream>
using namespace std;
int main()
{
    int i,a[5],count=0;
    for(i=0;i<5;i++)
        cin>>a[i];
    for(i=0;i<5;i++)
    {
        if(a[i]==30)
        {
            count++;
            break;
        }
    }
    if(count==1)
        cout<<"Party bhurabhai";
    return 0;
}
