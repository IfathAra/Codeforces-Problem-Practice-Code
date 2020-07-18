#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;
//int indx[200005];
int main()
{
    int n,k,m,t,a,b,ab,c,no;//must_ab=0;
    ll ans=0;
    cin>>n>>m>>k;
  //  if(k*2>m) must_ab=k-(m/2);
   vector< pair <int,int> > alice,bob,alice_bob,none,res;
    for(int i=1; i<=n; i++)
    {
        cin>>t>>a>>b;
       // indx[t]=i;///index store kore rakhtes
        if(a==1&&b==1) alice_bob.push_back(make_pair(t,i));
        else if(a==1) alice.push_back(make_pair(t,i));
        else if(b==1) bob.push_back(make_pair(t,i));
        else none.push_back(make_pair(t,i));
    }
    ll len_alice_bob = alice_bob.size(),len_alice=alice.size(),len_bob=bob.size();
    if(k>len_alice_bob+len_alice || k>len_alice_bob+len_bob||m>n||2*k-len_alice_bob>m)  cout<<-1<<endl;
    /// 2*k-len_alice_bob > m as jodi ora 2 jon alada alada nite hoy and tate m er cheye besi hoye gele -1  2*k-len_alice_bob korsi precaution hisebe jodi all ab neyar por o 2 jon alada alada nile m er cheye boro hoye jay taile -1
    else
    {
        sort(alice_bob.begin(),alice_bob.end());
        sort(alice.begin(),alice.end());
        sort(bob.begin(),bob.end());
        a=0,b=0,ab=0,c=0;
        while(k--) ///exactly m book choose korte hobe
        {
            c++;
            if(c>m) break;
            if(ab<len_alice_bob)
            {
                if(a<len_alice&&b<len_bob)
                {
                    if(alice_bob[ab].first>alice[a].first+bob[b].first&&c+1<m)
                    {
                        c++;
                        res.push_back(make_pair(alice[a].first,alice[a].second));
                        res.push_back(make_pair(bob[b].first,bob[b].second));//(bob[b]);
                        ans=ans+alice[a++].first+bob[b++].first;

                    }
                    else
                    {
                        res.push_back(make_pair(alice_bob[ab].first,alice_bob[ab].second));//(alice_bob[ab]);
                        ans=ans+alice_bob[ab++].first;
                    }
                }
                else
                {
                    res.push_back(make_pair(alice_bob[ab].first,alice_bob[ab].second));//(alice_bob[ab]);
                    ans=ans+alice_bob[ab++].first;
                }
            }
            else if(c+1<m)
            {
                res.push_back(make_pair(alice[a].first,alice[a].second));//(alice[a]);
                res.push_back(make_pair(bob[b].first,bob[b].second));//(bob[b]);
                ans=ans+alice[a++].first+bob[b++].first;
                c++;

            }
        }
        c=res.size();
        if(c<m)
        {
            c=m-c;
            while(a<len_alice) {none.push_back(make_pair(alice[a].first,alice[a].second));a++;}
            while(b<len_bob) {none.push_back(make_pair(bob[b].first,bob[b].second));b++;}// none.push_back(bob[b++]);
            while(ab<len_alice_bob) {none.push_back(make_pair(alice_bob[ab].first,alice_bob[ab].second));ab++;}//none.push_back(alice_bob[ab++]);
            int len_none=none.size();
            sort(none.begin(),none.end());
            no=0;
            while(c--)
            {
                ans=ans+none[no].first;
                res.push_back(make_pair(none[no].first,none[no].second));
                no++;
            }

        }
        cout<<ans<<endl;
        for(int i=0; i<m; i++) cout<<res[i].second<<" ";//<<" & "<<res[i].first<<" ";
        cout<<endl;

    }

    return 0;
}


