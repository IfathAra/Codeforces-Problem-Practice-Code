#include<iostream>
using namespace std;
int main()
{
    int t;
//     long long n,ans;
   cin>>t;
    while(t--)
    {
//
int n,a,b,i,j;
cin>>n>>a>>b;
char demochar='a';
//string sn,sa,sb;
char sb[b+1],sn[n+1];
//cout<<++ca;
if( a==1&&b==1)
{
    for(j=0;j<n;j++)
    {
        sn[j]=demochar;
        demochar++;
    }
}
else{
for( i=0;i<b;i++)
{
   sb[i]=demochar;
   demochar++;
}
sb[i]='\0';
//cout<<sb<<endl;
int k=0;
for( j=0;j<n;j++)
{
  sn[j]=sb[k];

  if(k==a-1||k==b-1) k=0;
  else   k++;

  //cout<<k<<" "<<sn[j]<<" ";
}
//cout<<endl<<"J "<<j;
}
sn[j]='\0';
cout<<sn<<endl;
   }
}
