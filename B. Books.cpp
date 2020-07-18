
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int n,t;
int ar[100005],cumsum[100005];
bool valid(int x)
{

        int d=x-1;

    for(int i=1;i<=n-d;i++)
    {
        if((cumsum[i+d]-cumsum[i-1])<=t) return true;
    }
    return false;
}
int main()
{

cin>>n>>t;
cumsum[0]=0;
for(int i=1;i<=n;i++)
{
    cin>>ar[i];
    cumsum[i]=cumsum[i-1]+ar[i];
}
int low=0,high=n,mid,ans;
while(low<=high)
{
    mid=low+(high-low)/2;
    if(valid(mid))
    {
        low=mid+1;
        ans=mid;
    }
    else high=mid-1;
}
cout<<ans<<endl;
return 0;
}

