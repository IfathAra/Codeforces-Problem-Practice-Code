#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;

int fmain()
{
    int n;
    cin>>n;
    int ar[n+2];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int s[n],t[n];
    int x=0,y=0,f=1;
    char ch;
    if(ar[n-1]==ar[n-2]) cout<<"NO\n";
    else
    {
        int c=0;
        s[x++]=ar[0];
        for(int i=1; i<n; i++)
        {
            if(ar[i]==ar[i-1])
            {
                c++;
                // s[x++]=ar[i];
                t[y++]=ar[i];
            }
            else
            {
                c=0;
                s[x++]=ar[i];
            }
            if(c>1)
            {
                f=0;
                break;
            }
        }
        //cout<<"X :"<<x<<" Y "<<y<<" c "<<c<<" f "<<f<<endl;
        if(f)
        {
            cout<<"YES\n";
            for(int i=0; i<x; i++)
            {
                cout<<s[i]<<" ";
            }
            for(int i=y-1; i>=0; i--)
            {
                cout<<t[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO\n";
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
