#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,d;
    cin>>t;
    while(t--)
    {
     cin>>n;
     d=n/2;
     if(d%2==1) cout<<"NO"<<endl;
     else
     {
         cout<<"YES"<<endl;
        int evsum=0,odsum=0;
        for(int i=2;i<=n;i=i+2)
        {
           cout<<i<<" ";
           evsum=evsum+i;
        }
        for(int i=1;i<n-1;i=i+2)
        {
           cout<<i<<" ";
           odsum=odsum+i;
        }
        int last=evsum-odsum;
        cout<<last<<endl;
     }
    }
}
