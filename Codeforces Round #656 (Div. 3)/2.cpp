#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;
int check[55];
int fmain()
{
    int n,tmp;
    cin>>n;
   // int ar[n+5];
   for(int i=1;i<=n;i++) check[i]=0;
   n=n*2;
    for(int i=1;i<=n;i++)
    {
      cin>>tmp;
      if(check[tmp]==0) {
        cout<<tmp<<" ";
        check[tmp]=1;
      }
    }
    cout<<endl;

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


