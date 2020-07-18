#include<iostream>
using namespace std;
int a[100005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

int n,m,imp;
cin>>n;
for(int i=1;i<=n;i++)
{
    cin>>m;
    int ff=0,f=0;
    for(int j=1;j<=m;j++)
    {
        int temp;
        cin>>temp;
        if(a[temp]==0&&ff==0)
        {
            a[temp]=1;
            //cout<<"BOOKED "<<temp<<endl;
            f=1;
            ff=1;
        }

    }
    if(f==0) {
            imp=i;
            f=1;
            }
}
int flag=0,jamai=0;
for(int i=1;i<=n;i++)
{
   if(a[i]==0&&jamai==0)
   {
    flag=1;
    jamai=i;
   }
   else a[i]=0;
}
if(flag==1)  cout<<"IMPROVE\n"<<imp<<" "<<jamai<<endl;
   else cout<<"OPTIMAL\n";

   }
}
