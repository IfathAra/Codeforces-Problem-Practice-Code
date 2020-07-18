#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;
int main()
{
int n,m,k;
cin>>n>>m>>k;
int ar[n+5],op[m+5][3];
for(int i=1;i<=n;i++)
{
    cin>>ar[i];
}
for(int i=1;i<=m;i++)
{
    cin>>op[i][0]>>op[i][1]>>op[i][2];
}
int x,y;
for(int i=0;i<k;i++)
{
    cin>>x>>y;
    for(int j=x;j<=y;j++)
    {
        for(int ii=op[j][0];ii<=op[j][1];ii++)
        {
            ar[ii]=ar[ii]+op[j][2];
        }
    }

}
//cout<<"output:\n";
for(int p=1;p<=n;p++)
{
    cout<<ar[p]<<" ";
}
//cout<<endl;
return 0;
}
