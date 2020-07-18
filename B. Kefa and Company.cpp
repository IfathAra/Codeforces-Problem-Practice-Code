#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;

int main()
{
    vector<pair<int,int> > ar;
    int n,d,a,b;
    cin>>n>>d;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        ar.push_back(make_pair(a,b));
    }
    sort(ar.begin(),ar.end());
//for(int i=1;i<=n;i++) cout<<ar[i].first<<" "<<ar[i].second<<endl;
    ll mx=-1,sum,i=0,j=1;
    sum=ar[0].second;
    for(; i<n-1,j<n; i++)
    {
        while(ar[j].first-ar[i].first<d)
        {
            sum=sum+ar[j].second;
            j++;
            if(j==n+1) break;

        }
        mx=max(mx,sum);
        sum=sum-ar[i].second;

    }
    mx=max(mx,sum);
    cout<<mx<<endl;
    return 0;
}
