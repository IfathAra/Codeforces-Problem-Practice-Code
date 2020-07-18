#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int fmain()
{
    int n,k,div=0,sum;
    cin>>n>>k;
    sum=n;
    k--;
    for(int i=2;i<=n/2;i++)
    {
       if(n%i==0)
       {
           div=i;
           break;
       }
    }
     if(div==0) div=n;
     n=n+div;

     for(int j=2;j<div;j++)
     {
       if(n%j==0)
       {
           div=j;
           break;
       }
     }
     n=n+(div*k);



    cout<<n<<endl;

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

