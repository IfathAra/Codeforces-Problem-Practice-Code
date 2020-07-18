#include<bits/stdc++.h>
#include<math.h>
using namespace std;
///long long int sum[99999999]; ete array overflow hoy tai map use korbo
map<int,int> sum;
///in a Map, every key is mapped with default value zero when the map is declared
/*
// For Structure
struct Node {
   int value = -1;
}

// For Map with every key mapped to default value -1
Map < int, Node > M;
*/
long long int dp(int m)
{
    if(m==1) return 0;
    if(m==2) return 1;
    if(sum[m]!=0) return sum[m];
   long long int l=m/2;
    long long int r=m-l;
    sum[m]=l*r+dp(l)+dp(r);
    return sum[m];

}

const unsigned int M = 1000000007;
int fmain()
{
unsigned long long  res=0;
long long int n;
cin>>n;
long long int temp;
for(int i=0; i<n;i++)
{
    cin>>temp;
    int x=dp(temp);
    //cout<<"x "<<x<<endl;
    res=(res%M+x%M)%M;
   // cout<<l<<" "<<r<<endl;
}
///as  (a+b)%m=(a%m+b%m)%m so
///res=res%M; etar bodol e upore korsi to avoid res integer overflow
cout<<res<<endl;;
return 1;
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
