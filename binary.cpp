#include <bits/stdc++.h>
using namespace std;

int main()
{  int n;
   cin>>n;
   int A[n];
   for(int i=0;i<n;i++) cin>>A[i];
   sort(A,A+n);
   int q;
   cin>>q;
   for(int i=0;i<q;i++)
   {   int a;
       cin>>a;
       int s=0;
       int e=n;
       int f=0;
       int ans=0;
       while(s<=e)
       {  int mid=(s+e)/2;
        if(A[mid]==a)
        {     ans=mid;
                f=1;
                break;
        }
        else if(A[mid]>a)
        {
          e=mid-1;
        }
        else if(A[mid]<a)
        {
          s=mid+1;
        }
       }
       if(f==1) cout<<ans<<" ";
       else cout<<-1<<" ";
      
   }
return 0;
}


