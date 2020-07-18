#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int fmain()
{
    int n ;
    cin>>n;
    int ar[n+5],temp[n+5],coun,maxcoun=1;
    for(int i=1; i<=n; i++)
    {
        cin>>ar[i];
        temp[i]=1;
    }
    ///the folowwing is Logest Incresing Subsequence concent code
    ///here j is the divisors of i
    for(int i=2; i<=n; i++)
    {
        for(int j=1; j*j<=i; j++)
        {
            if(i%j==0)
            {
            if(ar[j]<ar[i])
            {
                if(temp[i]<temp[j]+1)
                {
                    temp[i]=temp[j]+1;
                }
            }
             if(ar[i/j]<ar[i])
            {
                if(temp[i]<temp[i/j]+1)
                {
                    temp[i]=temp[i/j]+1;
                }
            }
            }
        }
    if(temp[i]>maxcoun) maxcoun=temp[i];
    }
////     for(int i=1;i<=n;i++)
////    {
////        cout<<ar[i]<<" ";
////    }
//    cout<<endl;
//    for(int i=1;i<=n;i++)
//    {
//        cout<<temp[i]<<" ";
//    }
//    cout<<endl;
    cout<<maxcoun<<endl;
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
