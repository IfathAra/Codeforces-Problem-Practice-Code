
#include<bits/stdc++.h>

using namespace std;
int sum[9999999];
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {

int st2=2,st1=0,coun=0;
cin>>n;
sum[0]=2;
int i=0;
while(sum[i]<n)
{
 i++;
 st2=st2+2;
 st1=st1+1;
 sum[i]=sum[i-1]+st2+st1;
}
//for(int ii=0;ii<=i;ii++)
//{
//    cout<<sum[ii]<<" ";
//}
if(sum[i]==n) cout<<1<<endl;
else
{
    i--;
    while(n>=2)
    {
       if(n-sum[i]>=0) {
            n=n-sum[i];
            if(n<sum[i])i--;
            coun++;
            //if(n==0) break;
            //cout<<"coun "<<coun<<" N "<<n<<endl;
       }
       else
       {
           i--;
       }
    }
cout<<coun<<endl;
}

//for(int ii=0;ii<=i;ii++)
//{
//    cout<<sum[ii]<<" ";
//}

   }
}
