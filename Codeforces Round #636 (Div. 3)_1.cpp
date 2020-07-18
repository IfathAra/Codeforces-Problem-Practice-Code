#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sum;
    cin>>t;
    while(t--)
    {
     cin>>n;
     int x;
     for(int i=1;i<=n;i++)
     {
         sum=(1 << (i + 1)) - 1;
         if(n%sum==0)
         {
             x=n/sum;
             cout<<x<<endl;
             break;
         }
     }
    }
}
