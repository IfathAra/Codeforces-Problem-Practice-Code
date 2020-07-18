#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;

int main()
{
    int n,d,i;
    cin>>n;
    ll ans=n;
    d=n/2;
    for( i=1;i<=d;i++)
    {
        if(i==(n-i)) ans=ans+(i*(n-i));
        else ans=ans+((i*(n-i))*2);
    }
    cout<<ans<<endl;
    return 0;
}
