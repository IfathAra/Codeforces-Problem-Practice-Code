#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;

int main()
{
string s,p="Just a legend";
cin>>s;
int postfix,l,f,n,en;
n=s.length();
for(int i=n-1;i>=0;i--)
{
    if(s[i]==s[0])
    {
        postfix=i;
        break;
    }
}

l=n-postfix;
en=n-(2*l);
//cout<<postfix<<" "<<l<<endl;
string s1,s2,s3;
s1=s.substr(0,l);
s2=s.substr(postfix,l);
s3=s.substr(l,en);
//cout<<s1<<" "<<s2<<" "<<s3<<endl;
if(s1==s2)
{
   f=s3.find(s1);
   if(f==-1) cout<<p;
   else cout<<s1;
}
else cout<<p;

    return 0;
}
