#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int fmain()
{
    int n;
    cin>>n;
    if(n<4) cout<<-1<<endl;
    else if(n==4)
    {
        cout<<3<<" "<<1<<" "<<4<<" "<<2<<endl;
    }
    else
    {
       // int n_od=n&1; ///1 hole odd
       int st,en;
        if(n&1==1)
        {
             st=n;
             en=n-1;
        }
        else
        {
          st=n-1;
          en=n;
        }
        for(int i=st;i>3;i=i-2)
        {
            cout<<i<<" ";
        }
        cout<<3<<" "<<1<<" "<<4<<" "<<2<<" ";
        for(int i=6;i<=en;i=i+2)
        {
           cout<<i<<" ";
        }
        cout<<endl;
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

