#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void fmain()
{
 ll n,k,nev=0,nod=0,kev=0,kod=0;
 cin>>n>>k;
 if(k>n) cout<<"NO\n";
 else if(n==k)
 {
     cout<<"YES\n";
     for(ll i=0;i<k;i++)
     {
         cout<<1<<" ";
     }
     cout<<endl;
 }
 else{

 if(n%2==0) nev=1;
 else nod=1;
 if(k%2==0) kev=1;
 else kod=1;
 if(nod==1&&kev==1)cout<<"NO\n";
 /*else if(nev==1&&kev==1)
 {
     cout<<"YES\n";
     ll sum=0;
     for(ll i=1;i<k;i++)
     {
         cout<<2<<" ";
         sum=sum+2;
     }
     cout<<n-sum<<endl;
 }*/
 else if(nod==1&&kod==1)
 {
     //yes
     cout<<"YES\n";
      ll sum=n-k+1;
       cout<<sum<<" ";
     for(ll i=1;i<k;i++)
    {
         cout<<1<<" ";

     }
     cout<<endl;

 }
 else if(nev==1&&kod==1||nev==1&&kev==1)
 {
     if(k<=(n/2))
     {
         ///yes
          cout<<"YES\n";
     ll sum=0;
     for(ll i=1;i<k;i++)
     {
         cout<<2<<" ";
         sum=sum+2;
     }
     cout<<n-sum<<endl;
     }
     else
     {
         cout<<"NO\n";
     }
 }

 }

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
