#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;

int fmain()
{
int one=0,zero=0,mincost=99999,cost,n;
string s;
cin>>s;
n=s.length();
int cumsum_zero[n+2],cumsum_one[n+2];
//cumsum_zero[0]=0;
//cumsum_one[0]=0;
for(int i=0;i<n;i++)
{
    if(s[i]=='0') zero++;
    else one++;

    cumsum_zero[i]=zero;
    cumsum_one[i]=one;
}
for(int i=0;i<n;i++)
{
   cost=cumsum_zero[i]+(one-cumsum_one[i]);///mane ei pos porjonto sob 0 and baki sob 1 korte cost
   mincost=min(mincost,cost);
   cost=cumsum_one[i]+(zero-cumsum_zero[i]);///mane ei pos porjonto sob 1 and baki sob 0 korte cost
   mincost=min(mincost,cost);
}
cout<<mincost<<endl;
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


