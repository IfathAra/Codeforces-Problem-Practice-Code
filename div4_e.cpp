#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int fmain()
{
    int check[9999];
    memset(check,0,sizeof(check));
    int n;
    cin>>n;
    int ar[n],maxx=-1,minn=99999;
   for(int i=0;i<n;i++)
   {
       int d;
       cin>>d;
       ar[i]=d;
       check[d]=check[d]+1;
       if(d>maxx) maxx=d;
       if(d<minn) minn=d;
   }
   //cout<<maxx<<" "<<minn;
   int psum,coun=0;
   //int j=0;
   for(int i=0;i<n;i++)
   {
       psum=ar[i];
      for(int j=i+1;j<n;j++)
      {
         psum=psum+ar[j];
         if(psum>maxx) break;
         if(check[psum]>0)
         {
             coun=coun+check[psum];
             check[psum]=0;
         }
      }

   }
   cout<<coun<<endl;


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
