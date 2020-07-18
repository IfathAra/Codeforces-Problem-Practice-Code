#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;

int fmain()
{
    ll n,right=0,wrong=0,s=1;
    cin>>n;
    ll ar[n+2];
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];

    }
    int i=1;
    while(ar[i]==i) i++;
    while(ar[n]==n) n--;
    for(;i<=n;i++)
    {
        if(ar[i]==i)
        {
        right=1; ///right ase mane all wrong na
        }
        else
        {
         wrong=1;   ///wrong ase mane all right na
        }
    }
    if(wrong==0) cout<<0<<endl; ///mane kono vul nai
    else if(right==0) cout<<1<<endl;///mane sob vul so 1 ta re arrange e thik korbo
    else cout<<2<<endl; ///sob thik gula k soraye vul korbo 1 move e then abar sob thik jaygay rakhbo 1 move e

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

