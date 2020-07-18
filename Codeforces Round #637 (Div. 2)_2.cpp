#include<bits/stdc++.h>
using namespace std;
int main()
{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//
///using window sliding technique
int n,k,peek=0,l;
cin>>n>>k;
int al[n+3],an[n+3];
cin>>an[1];
cin>>an[2];
al[1]=0;
al[n]=0;
int sum=0;
//cout<<"len "<<1<<" sum "<<sum<<endl;
int len=1;
for(int i=3;i<=n;i++)
{
   cin>>an[i];
   if(an[i-1]>an[i]&&an[i-1]>an[i-2])
   {

       al[i-1]=1;

   }
   else al[i-1]=0;
   if(len<k) sum=sum+al[len++];
   //cout<<"len "<<len<<" sum "<<sum<<endl;

}
cout<<al[k+1]<<" see\n";
int maxsum=sum,windowsum=sum,window_start=1;
for(int i=1;i<=n-k;i++)
{
        windowsum=windowsum-al[i]+al[k+i];
        if(windowsum>maxsum)
        {
            maxsum=windowsum;
            window_start=i;
        }

    //cout<<al[i]<<" ";
}
cout<<maxsum<<" "<<window_start<<endl;

//cout<<peek;
//    }
}
