#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;
int main()
{
ll k;
	cin>>k;
	ll p=1;
	while(pow(p,10)<=k) p++;
	p--;
	//cout<<p<<endl;
	ll c=0;
	if(pow(p,10)!=k){
		while(pow(p+1,c)*pow(p,10-c)<k) c++;
	}
	//cout<<c<<endl;
	string s="codeforces";
	for(ll i=0;i<10;i++){
		if(c){
			cout<<s[i];
			c--;
		}
		for(ll j=0;j<p;j++) cout<<s[i];
	}
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
