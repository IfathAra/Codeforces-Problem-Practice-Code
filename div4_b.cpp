#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int fmain()
{
    int n,k;
    cin>>n>>k;
    if(n==k)
    {
        cout<<"YES\n";
        for(int i=0;i<k;i++)
        {
            cout<<1<<" ";
        }
        cout<<endl;
    }
    else if(n<k) cout<<"NO\n";
    else
    {
    ///jodi n&1 is 1 then n odd else even
    int n_od=n&1;
    int k_od=k&1;
    //cout<<n_od<<" "<<k_od;
    if(n_od==0)///mane n even
    {
       if(k<=(n/2))
       {
           cout<<"YES\n";
          for(int i=1;i<k;i++)
          {
              cout<<2<<" ";
          }
          cout<<n-(2*(k-1))<<endl;
       }
       else
       {
           if(k_od==0) ///mane k even
           {
               cout<<"YES\n";
               for(int i=1;i<k;i++)
               {
                   cout<<1<<" ";
               }
               cout<<n-(k-1)<<endl;
           }
           else
              cout<<"NO\n";
       }
    }
    else///mane n odd
    {
      if(k_od==0)///mane k even
      {
          cout<<"NO\n";
      }
      else
      {
          cout<<"YES\n";
          for(int i=1;i<k;i++ )
          {
              cout<<1<<" ";
          }
          cout<<n-k+1<<endl;
      }
    }
    }


return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        fmain();
    }
}

