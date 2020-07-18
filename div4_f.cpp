#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int fmain()
{
    int n0,n1,n2;
    cin>>n0>>n1>>n2;
    int n1_od=n1&1; ///n1_od=1 mane n1 odd
    if(n0>0)
    {
        if(n1_od==0&&n1>0) ///mane n1 jodi even hoy
        {
            cout<<1;
            n1--; ///now n1 become odd so,no problem
            for(int i=0; i<=n0; i++)
            {
                cout<<0;
            }
        }
        else
        {
            for(int i=0; i<=n0; i++)
            {
                cout<<0;
            }
        }
        int ld;
        if(n1>0)
        {
            for(int i=1; i<=n1; i++)
            {
                if(i%2)
                {
                    cout<<1;///odd er jonno 1
                    ld=1;
                }
                else
                {
                    cout<<0;///even er jonno 0
                    ld=0;
                }
                ///evabe alter kore 1 0 print hbe
            }
            if(n2>0)
            {
                for(int i=1; i<=n2; i++)
                {
                    cout<<1;
                }

            }
        }


    }
    else /// no 00 pair
    {
        int t;
        if(n1>0)
        {
            if(n1_od==1)
            {
                for(int i=0; i<=n1; i++)
                {
                    if(i%2)
                    {
                        cout<<1;///odd er jonno 1
                        t=1;
                    }
                    else
                    {
                        cout<<0;///even er jonno 0
                        t=0;
                    }
                    ///evabe alter kore 1 0 print hbe
                }
            }
            else
            {
                for(int i=1; i<=n1; i++)
                {
                    if(i%2)
                    {
                        cout<<1;///odd er jonno 1
                        t=1;
                    }
                    else
                    {
                        cout<<0;///even er jonno 0
                        t=0;
                    }
                    ///evabe alter kore 1 0 print hbe
                }
            }
            if(n2>0)
            {
                if(t==1)
                {
                    ///mane 01 so,last digit 1 so porer 1 n2 sonkhok print korbo
                    for(int i=1; i<=n2; i++)
                    {
                        cout<<1;
                    }
                }
                else
                {
                    ///mane 10 so,last digit 0 so,porer 1 n2+1 sonkhok print korbo
                    for(int i=0; i<=n2; i++)
                    {
                        cout<<1;
                    }
                }

            }
            else
            {
                ///jodi 11 pair 0 hoy
                if(t==0) cout<<1;
            }
        }
        else
        {
            for(int i=0; i<=n2; i++)
            {
                cout<<1;
            }
        }
    }
    cout<<endl;

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
