#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;

int fmain()
{
int s,n,c=0,ans;
cin>>s>>n;
if(n&1) n=n-1;
if(s&1&&s!=1)
{
    c=1;
    s=s-1;
}
if(s<=n) c=c+1;
else
{
c=c+s/n;
if(s%n!=0) c=c+1;
}
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
