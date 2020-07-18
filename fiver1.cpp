#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int fmain()
{
    long long x,y,odsum,evsum;
    cin>>x>>y;
    odsum=(x*(x+1))-(y*y);
    if(odsum<0)odsum=odsum*-1;
    evsum=(x*x)-(y*(y+1));
    if(evsum<0) evsum=evsum*-1;
    if(odsum<evsum) cout<<odsum<<endl;
    else cout<<evsum<<endl;

return 1;
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
    return 0;
}
