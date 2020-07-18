
#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;

int fmain()
{
string no="NO\n",yes="YES\n";
int ab,ac,bc,a,b,c;
cin>>ab>>ac>>bc;
if(ab!=ac&&ac!=bc&&bc!=ab) cout<<no;
else if(ab==ac&&ac==bc&&bc==ab) cout<<yes<<ab<<" "<<ac<<" "<<bc<<endl;
else
{
    if(ab==ac)
    {
      if(ab>bc)cout<<yes<<ab<<" "<<bc<<" "<<bc<<endl;
      else cout<<no;
    }
    else if(ab==bc)
    {
      if(ab>ac)cout<<yes<<ab<<" "<<ac<<" "<<ac<<endl;
      else cout<<no;
    }
    else if(ac==bc)
    {
      if(ac>ab)cout<<yes<<ac<<" "<<ab<<" "<<ab<<endl;
      else cout<<no;
    }
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

