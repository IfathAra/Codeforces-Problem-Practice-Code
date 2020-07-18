#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;

int fmain()
{
double  n,g,a,b,suma=0,sumb=0,d;
cin>>n;
while(n--)
{
    cin>>g>>a>>b;
    d=a+b;
    d=g/d;
    suma=suma+b*d;
    sumb=sumb+a*d;
}
cout<<fixed<<suma<<" "<<sumb<<endl;
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
