#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;

int main()
{
    int n,t,q,ans;
    cin>>n;
    vector<int> ar;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        ar.push_back(t);
    }
    sort(ar.begin(),ar.end());
 cin>>q;
 while(q--)
 {
     cin>>t;
        ans=upper_bound(ar.begin(),ar.end(),t)-ar.begin();///t er cheye boro er index as 0 based index tai oi 1st boro er index = k er soman ba choto number er sonkha :v
        cout<<ans<<endl;
 }
    return 0;
}
