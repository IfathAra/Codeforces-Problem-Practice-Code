#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;
char s[131075];
int cost(int i,int j,char c)
{
    int coun=0;
    while(i<=j)
    {
        if(s[i]!=c) coun++;
        i++;
    }
    return coun;
}
int makegood(int i,int j,char c)
{
    if(i==j) ///mane 1 ta char ase
    {
        if(s[i]==c) return 0; ///no change need
        else return 1; ///c korar jonno 1 ta move lagbe
    }
    else
    {
        int mid=(i+j)/2; ///ordhek vag kore dekhbo aaaa.... korte kom cost naki ...aaaa korte kom cost
        return min(cost(i,mid,c)+makegood(mid+1,j,c+1),makegood(i,mid,c+1)+cost(mid+1,j,c));
    }
}
int fmain()
{
int n,ans;
cin>>n;
for(int i=1;i<=n;i++) cin>>s[i];
ans=makegood(1,n,'a');
cout<<ans<<endl;
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


