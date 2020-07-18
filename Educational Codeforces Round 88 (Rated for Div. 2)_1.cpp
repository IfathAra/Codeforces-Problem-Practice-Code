#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int fmain()
{
int n,m,k,d,no,ans;
cin>>n>>m>>k;
no = n/k;
if(no>=m) ans=m;
else
{
    m=m-no;
    k=k-1;
    int dem;
    if(m>k){
           dem=m/k;
            if(m%k!=0) dem=dem+1;
          // cout<<"dem "<<dem<<endl;
           if(dem>no)dem=no;
    }
    else dem=1;
    ans=no-dem;
}
cout<<ans<<endl;
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
