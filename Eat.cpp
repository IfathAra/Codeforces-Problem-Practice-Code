#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;

int fmain()
{
    string yes="YES\n",no="NO\n";
    ll adel=0,tsum=0,n,temp,yasser=0,f=1,f2=1,y=0,tmp;
    cin>>n;
    ll ar[n+2];
    for(int i=1; i<=n; i++)
    {
        cin>>temp;
        yasser+=temp;
        ar[i]=temp;
        // if(yasser<=0) y=1; // maane oi part bad dile adel besi pabe
        if(temp<0)
        {
            f=0;/// 0 jodi na hoy taile yasser e happy hobe cz all positive
        }
        else
        {
            //tsum=tsum+temp;
            f2=0;///f2 0 nahole mane all neg so ekta kom kheleo adel besi test pabe so yasser happy hobe na
        }
    }
    if(f)
    {
        if(yasser==0) cout<<no;
        else cout<<yes;
    }
    else if(f2) cout<<no; ///as no positive number so,adel ekta neg num kom nilei adel er besi hoye jacche
    else
    {
         tmp=0;
        for(int i=1; i<=n; i++)
        {
            tmp=tmp+ar[i];
            if(tmp<=0)
            {
                y=1;
                break;
            }
        }
        tmp=0;
        for(int i=n; i>=1; i--)
        {
            tmp=tmp+ar[i];
            if(tmp<=0)
            {
                y=1;
                break;
            }
        }
        int i=1,j=n;
        tmp=0;
        while(i<j)
        {
            tmp=tmp+ar[i];
            if(tmp<=0)
            {
                y=1;
                break;
            }
            tmp=tmp+ar[j];
            if(tmp<=0)
            {
                y=1;
                break;
            }
            i++;
            j--;
        }
        i=1,j=n;
        tmp=0;
        while(i<j)
        {
            tmp=tmp+ar[j];
            if(tmp<=0)
            {
                y=1;
                break;
            }
            tmp=tmp+ar[i];
            if(tmp<=0)
            {
                y=1;
                break;
            }
            i++;
            j--;
        }
        if(y==0) cout<<yes;
        else cout<<no;
    }

    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        fmain();
    }
}

