#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int ar[n+5],temp[n+5],coun,maxcoun=1;
    for(int i=1; i<=n; i++)
    {
        cin>>ar[i];
        temp[i]=1;
    }
    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<i; j++)
        {
            if(ar[j]<ar[i])
            {
                if(temp[i]<temp[j]+1)
                {
                    temp[i]=temp[j]+1;
                }
            }
        }
    if(temp[i]>maxcoun) maxcoun=temp[i];
    }
     for(int i=1;i<=n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl<<maxcoun;
    return 1;
}
