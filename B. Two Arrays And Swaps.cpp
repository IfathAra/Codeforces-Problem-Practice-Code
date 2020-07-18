#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int fmain()
{
int n,k;
cin>>n>>k;
int a[n+5],b[n+5];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    cin>>b[i];
}
sort(a,a+n, greater<int>());
sort(b,b+n, greater<int>());
int sum=0,i,j;
for( i=0;i<n-k;i++)
{
   sum=sum+a[i];
}
j=0;
for(int c=0;c<k;c++)
{
    if(a[i]<b[j]){
            sum=sum+b[j];
            j++;
            //cout<<" b->"<<b[j];
    }
    else{
       sum=sum+a[i];
       i++;
       //cout<<" a->"<<a[i];
    }

    if(i==n)break;
    if(j==k) break;
}
cout<<sum<<endl;
return 1;
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

