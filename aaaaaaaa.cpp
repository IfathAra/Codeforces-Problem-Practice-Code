#include <bits/stdc++.h>
using namespace std;
int dup[105];
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int arr[n+5],duparr[n+5],distinct=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(dup[x]==0)
            {
                duparr[distinct]=x;
                distinct++;
                dup[x]=1;


            }
            arr[i]=x;
        }
        if(distinct>k) cout<<-1<<endl;
        else
        {

        /*  if(distinct==k)
           {
               int ans=n+k;
               cout<<ans<<endl;
               int y=0;
               for(int i=0;i<ans;i++) {
                    if(y==distinct) y=0;
                    cout<<duparr[y++]<<" ";
               }
               //for(int i=0;i<k;i++) cout<<duparr[i]<<" ";
               cout<<endl;
           }
           else
           {*/
               int ans=n*k;
               cout<<ans<<endl;
               int y=0;
               int d=distinct;
               while(d!=k)
               {
                   duparr[d]=duparr[d-1];
                   //cout<<" SEE "<<duparr[d]<<" index "<<d<<endl;
                   d++;

               }

               for(int i=0;i<ans;i++) {
                    if(y==k) y=0;
                    cout<<duparr[y++]<<" ";
               }
               //for(int i=0;i<k;i++) cout<<duparr[i]<<" ";
               cout<<endl;
          // }
        }
      for(int i=0;i<distinct;i++)
      {
        dup[duparr[i]]=0;
      }
    }
    }
