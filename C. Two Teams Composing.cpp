#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
#define ffi for(int i=0;i<n;i++)
using namespace std;

int fmain()
{
    int n;
    cin>>n;
    int ar[n+2],dup=0,sim=0,nonsim=1;
    for(int i=0; i<n; i++) cin>>ar[i];
    if(n==1) cout<<0<<endl;
    else if(n==2) cout<<1<<endl;
    else
    {
        sort(ar,ar+n);
//        ffi cout<<ar[i]<<" ";
//        cout<<endl;
        for(int i=1; i<n;)
        {
            if(ar[i]==ar[i-1])
            {
                // if(i==1)
                dup=1;
                while(ar[i]==ar[i-1])
                {
                    i++;
                    dup++;
                    if(i==n) break;
                }
            }
            else
            {
                // if(i==1)nonsim=1;
                i++;
                nonsim++;
            }
        sim=max(sim,dup);
        }
      //  cout<<"non "<<nonsim<<" sim "<<sim<<endl;
            if(sim==nonsim)cout<<sim-1<<endl;
            else if(nonsim<sim)
            {
                cout<<nonsim<<endl;
            }
            else
            {
                if(sim)cout<<sim<<endl;
                else cout<<1<<endl;
            }
        }
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


