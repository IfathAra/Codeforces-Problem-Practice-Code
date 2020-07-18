#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int fmain()
{
 int n,k,coun=0;
    cin>>n>>k;
    if(n==k) cout<<n+1<<endl;
    else if(n>k) cout<<k<<endl;
    else{
            ///ekhane logic holo 4 er non div 4 er moddhe pai 3 ta so, n-1 ta number pai n er moddhe tai k ta number pai n/n-1*k er moddhe
            ///ekhn result jodi integer ase tar mane n er multiple ekta number ans ta tai ans-1 kore tar ager ta nibo nahole double asle oitai answer
            double  dem=(double)n/(n-1);
            //cout<<"Dem "<<dem<<endl;
            dem=dem*k;
            int d=dem;
            if(d==dem) d=d-1;
            cout<<d<<endl;
    }

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
