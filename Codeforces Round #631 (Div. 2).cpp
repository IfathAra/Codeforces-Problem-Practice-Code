#include<bits/stdc++.h>
using namespace std;
int main()
{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//
int n,x,i;
cin>>n>>x;
int ar[n+1];
for(i=0;i<n;i++)
{
    cin>>ar[i];
}
sort(ar,ar+n);
int c=0,prev=-1;
for( i=0;i<n;i++)
{
   if(ar[i]<=x&&prev!=ar[i]) {
        c++;
        prev=ar[i];
   }
   else break;

}
c=c+x;
   cout<<"C "<<c<<"ar[i] "<<ar[i]<<endl;
if(ar[i]-c==1) c++;
cout<<c<<endl;
//    }
}
