#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;
int indx[200005];
int main()
{
    int n,k,m,t,a,b,ab,c,no;//must_ab=0;
    ll ans=0;
    cin>>n>>m>>k;
  //  if(k*2>m) must_ab=k-(m/2);
    vector<int> alice,bob,alice_bob,none,res;
    for(int i=1; i<=n; i++)
    {
        cin>>t>>a>>b;
        indx[t]=i;///index store kore rakhtesi
        if(a==1&&b==1) alice_bob.push_back(t);
        else if(a==1) alice.push_back(t);
        else if(b==1) bob.push_back(t);
        else none.push_back(t);
    }
    int len_alice_bob = alice_bob.size(),len_alice=alice.size(),len_bob=bob.size();
    if(k>len_alice_bob+len_alice || k>len_alice_bob+len_bob||m>len_alice_bob+len_bob+len_alice)  cout<<-1<<endl;
    else
    {
        sort(alice_bob.begin(),alice_bob.end());
        sort(alice.begin(),alice.end());
        sort(bob.begin(),bob.end());
        a=0,b=0,ab=0,c=0;
        while(k--) ///exactly m book choose korte hobe
        {
            c++;

            if(ab<len_alice_bob)
            {
                if(a<len_alice&&b<len_bob)
                {
                    if(alice_bob[ab]>alice[a]+bob[b]&&c+1<m)
                    {
                        c++;
                        res.push_back(alice[a]);
                        res.push_back(bob[b]);
                        ans=ans+alice[a++]+bob[b++];

                    }
                    else
                    {
                        res.push_back(alice_bob[ab]);
                        ans=ans+alice_bob[ab++];
                    }
                }
                else
                {
                    res.push_back(alice_bob[ab]);
                    ans=ans+alice_bob[ab++];
                }
            }
            else
            {
                res.push_back(alice[a]);
                res.push_back(bob[b]);
                ans=ans+alice[a++]+bob[b++];

            }
        }
        c=res.size();
        if(c<m)
        {
            c=m-c;
            while(a<len_alice) none.push_back(alice[a++]);
            while(b<len_bob) none.push_back(bob[b++]);
            while(ab<len_alice_bob) none.push_back(alice_bob[ab++]);
            int len_none=none.size();
            sort(none.begin(),none.end());
            no=0;
            while(c--)
            {
                ans=ans+none[no];
                res.push_back(none[no++]);
            }

        }
        cout<<ans<<endl;
        for(int i=0; i<m; i++) cout<<indx[res[i]]<<" & "<<res[i]<<" ";
        cout<<endl;

    }

    return 0;
}
