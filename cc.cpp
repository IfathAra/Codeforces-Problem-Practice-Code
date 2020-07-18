#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;
int fmain()
{
    //ll n;
    int n,k,c=0;
    cin>>n>>k;
    string s;
    cin>>s;
int j=0,f=0,zero=0;
for(int i=0;i<n;i++)
{
  if(s[i]=='0')
  {
   zero++;
   if(f==0)
   {
       if(zero==k+1)
       {
           c=c+1;
           zero--;
           f=1;
       }
   }
   else
   {
       if(zero==(2*k+1))
       {
           c++;
           zero=k;
           f=1;
       }
   }
  }
  else
  {
      zero=0;
      f=1;
  }

}
if(f==0)
{
    k=k+1;
    if(n%k==0) c=n/k;
    else c=(n/k)+1;
}
else
{
    c=c+zero/(k+1);
}


//cout<<endl;

    cout<<c<<endl;
return 0;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        fmain();
    }
}


