#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;

int main()
{
    int n,k,t,a,b,ab;
    ll ans=0;
    cin>>n>>k;
    vector<int> alice,bob,alice_bob;
    for(int i=0;i<n;i++)
    {
        cin>>t>>a>>b;
        if(a==1&&b==1) alice_bob.push_back(t);
        else if(a==1) alice.push_back(t);
        else if(b==1) bob.push_back(t);
    }
    int len_alice_bob = alice_bob.size(),len_alice=alice.size(),len_bob=bob.size();
    if(k>len_alice_bob+len_alice || k>len_alice_bob+len_bob) ans=-1;
    else
    {
        sort(alice_bob.begin(),alice_bob.end());
        sort(alice.begin(),alice.end());
        sort(bob.begin(),bob.end());
        a=0,b=0,ab=0;
        while(k--)
        {
            if(ab<len_alice_bob)
            {
                if(a<len_alice&&b<len_bob){
                        if(alice_bob[ab]>alice[a]+bob[b])
                        {
                            ans=ans+alice[a++]+bob[b++];
                        }
                        else ans=ans+alice_bob[ab++];
                }
                else ans=ans+alice_bob[ab++];
            }
            else  ans=ans+alice[a++]+bob[b++];
        }
    }
    cout<<ans<<endl;
//        cout<<"alice and bob\n";
//        for(int i=0;i<len_alice_bob;i++) cout<<alice_bob[i]<<" ";
//    }   cout<<"\nalice\n";
//        for(int i=0;i<len_alice;i++) cout<<alice[i]<<" ";
//        cout<<"\nbob\n";
//        for(int i=0;i<len_bob;i++) cout<<bob[i]<<" ";
//cout<<123445%7;

return 0;
}
int fmain()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        fmain();
    }
}


