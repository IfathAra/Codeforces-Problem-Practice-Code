#include<bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;
int fmain()
{
ll a,b,n,mx,mi,c=0;
cin>>a>>b>>n;
mx=max(a,b);
mi=min(a,b);
while(1)
{
     c++;
    mi=mx+mi;
  //  cout<<"mx "<<mx<<" min "<<mi<<endl;
    if(mi>n) break;
    swap(mi,mx);

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
