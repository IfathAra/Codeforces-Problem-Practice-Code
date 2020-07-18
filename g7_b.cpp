#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;
int main()
{
    ll k,tmp;
    string s="codeforces";
    cin>>k;
    if(k==1)
    {
        cout<<s;
    }
    else
    {
        //k--;
        ll n2,sum,c,temp;
        double n1=2,pn1;
        int p=10;
        n2=pow(n1,p);
        while(n2<k)
        {
            n1++;
            n2=pow(n1,p);
           // cout<<"n2 "<<n2<<" k "<<k<<endl;

        }
       // cout<<n2<<endl;
        if(n2==k)
        {
            ///n2 sonkhok codeforces likha dao
            c=0;
            for(int i=0;i<10;i++)
            {
                for(int j=1;j<=n1;j++)
                {
                    cout<<s[i];
                }
            }

        }
        else
        {
            ///n2>k
            //cout<<"n1 "<<n1<<endl;
            pn1=n1-1;
            p=1;
            sum=pow(n1,p)*pow(pn1,10-p);///n1 ta char 10-p shonkhok thakbe and pn1 ta char p shonkhok thakbe
            //cout<<"sum "<<sum<<" p "<<p<<" k "<<k<<endl;
            while(sum<k)
            {
                p++;
               // sum=pow(n1,10-p)*pow(pn1,p);
               ///ekhane n1>pn1 & n1 besi neya hocche tai besi combination hoye jacche tai n1 kom nibo r pn1 besi nibo niche
                sum=pow(n1,p)*pow(pn1,10-p);
                //cout<<"sum "<<sum<<" p "<<p<<" k "<<k<<endl;

            }

        //cout<<"n1 "<<n1<<" count "<<p<<" pn1 "<<pn1<<" count "<<10-p<<endl;
        ///p ta char thakbe n1 bar, 10-p ta char thakbe pn1 bar
        for(int i=0;i<p;i++)
        {
            c=n1;
            while(c--)
            {
                cout<<s[i];
            }
        }
        for(int i=p;i<10;i++)
        {
            c=pn1;
            while(c--)
            {
                cout<<s[i];
            }
        }
        }

    }
    return 0;
}

