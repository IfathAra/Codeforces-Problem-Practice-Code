#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int fmain()
{
int n,m,x,y,sum=0,cov;
cin>>n>>m>>x>>y;
if((x+x)<y)y=x+x;
//cout<<x<<" "<<y;

char ar[n+5][m+5];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>ar[i][j];
    }
    ar[i][m]='*';
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;)
    {
       // cout<<ar[i][j]<<" ";
        if(ar[i][j]=='.')
        {
          if(ar[i][j+1]=='.') {
                sum=sum+y;
               // cout<<"sum y "<<sum<<endl;
                j=j+2;
          }
          else {
                sum=sum+x;
               // cout<<"sum x "<<sum<<endl;
                j++;
          }
        }
        else j++;
    }
   // cout<<endl;
}
cout<<sum<<endl;
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
/*
array er bodol e khub sohoje map use kora jay
///long long int sum[99999999]; ete array overflow hoy tai map use korbo
map<int,int> sum;
///in a Map, every key is mapped with default value zero when the map is declared

// For Structure
struct Node {
   int value = -1;
}

// For Map with every key mapped to default value -1
Map < int, Node > M;
mod er use:
(a+b)%m=(a%m+b%m)%m
*/

