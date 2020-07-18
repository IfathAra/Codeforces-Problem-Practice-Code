#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;

int main()
{
int n,k,i,j;
cin>>n>>k;
if(k>=n) cout<<-1<<endl;
else
{
   i=n-k-1;
   j=2;
   while(i)
   {
       cout<<j<<" ";
       j++;
       i--;
   }
   cout<<1<<" ";
   i=n-k+1;
   while(i<=n)
   {
       cout<<i<<" ";
       i++;
   }
    cout<<endl;
}
    return 0;
}


