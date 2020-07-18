#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;

int fmain()
{
int n;
cin>>n;
int ar[n+5],ans=0,c=1;
for(int i=1;i<=n;i++) cin>>ar[i];
while(ar[n-1]>=ar[n]) n--;
for(int i=1;i<n;i++)
{
  if(ar[i+1]>=ar[i])  c++;///normal
  else
  {
      if(i<n)
      {
          ans=ans+c;
          c=1;
      }
  }
}
cout<<ans<<endl;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        fmain();
    }
}


