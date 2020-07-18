#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n ;
   cin>>n;
   int ar[n+5];
   for(int i=1;i<=n;i++)
   {
       cin>>ar[i];
   }
   sort(ar+1,ar+n+1);
//   for(int i=1;i<=n;i++)
//   {
//       cout<<ar[i]<<" ";
//   }

   if(n%2==0) {
        cout<<ar[n/2]<<endl;
   }
   else cout<<ar[n/2+1]<<endl;
}
